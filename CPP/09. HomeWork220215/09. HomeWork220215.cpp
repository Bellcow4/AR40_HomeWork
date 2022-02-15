// 09. HomeWork220215.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <assert.h>
#include <crtdbg.h>

using DataType = int;

class GameArray
{
private:
    int Size_;
    int PrevSize_;
    DataType* ArrData_;
    DataType* TempArr_;
public:
    int GetSize()
    {
        return Size_;
    }

    DataType& operator[](int _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    inline void operator=(const GameArray& _Other)
    {
        ReSize(_Other.Size_);

        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }

        return;
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = Data;
        }
    }

    inline void Swap()
    {
        TempArr_ = new DataType[Size_];

        for (int i = 0; i < Size_; i++)
        {
            TempArr_[i] = ArrData_[i];
        }
    }


    inline void Release()
    {
        if (nullptr != ArrData_)
        {
            Swap();
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }

    inline void ReleaseAll()
    {
        delete[] ArrData_;
        ArrData_ = nullptr;
        delete[] TempArr_;
        TempArr_ = nullptr;
    }

    void ReSize(unsigned int _Size)
    {
        Release();
        ArrData_ = new DataType[_Size];
        PrevSize_ = Size_;
        Size_ = _Size;

        if (nullptr != TempArr_)
        {
            /*for (size_t i = 0; i < Size_; i++)
            {
                ArrData_[i] = TempArr_[i];
            }*/

            for (size_t i = 0; i < PrevSize_; i++)
            {
                ArrData_[i] = TempArr_[i];
            }


            delete[] TempArr_;
            TempArr_ = nullptr;
        }
    }

public:
    GameArray(unsigned int _Size)
        : ArrData_(nullptr)
        , TempArr_(nullptr)
        , Size_(0)
        , PrevSize_(0)
    {
        ReSize(_Size);
    }

    ~GameArray()
    {
        ReleaseAll();
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    GameArray NewArray = GameArray(3);

    int Size = sizeof(GameArray);

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        NewArray[i] = i+1;
    }

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        std::cout << NewArray[i] << std::endl;
    }

    NewArray.ReSize(20);
    std::cout << "리사이즈" << std::endl;

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
        std::cout << NewArray[i] << std::endl;
    }
}