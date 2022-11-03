
#include "gtest/gtest.h"
#include <unordered_map>

#include "SportWearDecorator.h"
#include "XiZhuangDecorator.h"
#include "Teacher.h"
class TestModel : public testing::Test {
public:
    TestModel() = default;
    ~TestModel() = default;
};

TEST_F(TestModel, test_decorator)
{
    shared_ptr<People> plp = make_shared<Teacher>();
    plp->ShowClothes();

    shared_ptr<People> base = plp;
    plp = make_shared<SportWearDecorator>(base);

    plp->ShowClothes();
    plp->ShowNames("2");

    plp = make_shared<XiZhuangDecorator>(base);
    plp->ShowClothes();

    EXPECT_EQ(0, 0);
}

#include "RedCar.h"
#include "RedCarFactory.h"
TEST_F(TestModel, test_factory)
{
    unordered_map<std::string, shared_ptr<CarFactory>> factoryCont;
    factoryCont["red"] = std::make_shared<RedCarFactory>();

    shared_ptr<Car> car = factoryCont["red"]->CreatCar();
    car->Show();
    EXPECT_EQ(0, 0);
}


#include "HexObserver.h"
#include "DecObserver.h"
#include "subject.h"

TEST_F(TestModel, test_observer)
{
    shared_ptr<subject> sub = make_shared<subject>();
    shared_ptr<HexObserver> hex = make_shared<HexObserver>(sub);
    shared_ptr<DecObserver> dec = make_shared<DecObserver>(sub);
    sub->Notify(13);
}
#include "Executor.h"

TEST_F(TestModel, test_state)
{
    Executor exec;
    exec.Start();
    exec.Start();
    std::this_thread::sleep_for(std::chrono::seconds(2));
    exec.Start();
}


#include "CheckCrc.h"
#include "Data.h"

TEST_F(TestModel, test_template)
{
    std::unique_ptr<Data> it = make_unique<Data1>();
    auto ret = CheckCrc(std::move(it));

    std::unique_ptr<Data> it2 = make_unique<Data2>();
    ret = CheckCrc(std::move(it2));
    EXPECT_EQ(0, ret);
}

TEST_F(TestModel, test_game)
{
    int MAX_Y = 10;
    int MAX_X = 10;
    
	for (int i = 0; i < MAX_Y + 2; i++)
	{
		for (int j = 0; j < MAX_X / 2 + 3; j++)
		{
			if (i == MAX_Y + 1)
			{
				if (j == 0)
					printf("╚");
				else if (j == MAX_X / 2 + 2)
					printf("╝");
				else
					printf("══");
			}
			else
			{
				if (j == 0)
					printf("║");
				else if (j == MAX_X / 2 + 2)
					printf("║");
				else
					printf("  ");
			}
		}
		printf("\n");
	}
}
