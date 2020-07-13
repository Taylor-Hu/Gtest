/**
@file test_video.cpp
@def group video���Լ�

@author ���繫˾����������:	����ǿ
@date   2014��4��10��  
@version V4.0
@todo     ---ʱ��---����-------------�޸Ĳ��ּ�ԭ��----------
@todo     1 2014��4��10�� ����ǿ  ����


@{
*/

/*���Լ����ƶ���*/
#ifdef CASE_NAME
#undef CASE_NAME
#endif
#define CASE_NAME TestVideo


#include "test_menu.h"
#include "test_modules.h"


void CASE_NAME::SetUpTestCase() {
//excute before each test suit
//std::cout << "init SetUp rtos TestCase " << std::endl;
RUN_CMD("tuner.lock %s", fw_getenv("TUNER_PARAMS1"));

}
void CASE_NAME::TearDownTestCase() {
//excute after each test suit
//std::cout << "deinit video rtos TestCase " << std::endl;
}

void CASE_NAME::SetUp()
{
//execute before testcase
//std::cout << "Chdrv SetUp" << std::endl;
}
void CASE_NAME::TearDown()
{
//execute before testcase
//std::cout << "Chdrv TearDown" << std::endl;
}
#if ENABLE_TESTCASE

CASE_F(TEST_VIDEO_INIT1,
	"���Զ�γ�ʼ��ʱ�Ƿ񷵻�OK") {
	EXPECT_EQ(CHDRV_VIDEO_OK, CHDRV_VIDEO_Init());
	EXPECT_EQ(CHDRV_VIDEO_OK, CHDRV_VIDEO_Init()) << "��γ�ʼ��Ӧ�÷���OK";
}


CASE_F(TEST_VIDEO_INIT2,
	"����ģ���Ƿ�ɱ�����") {
      //EXPECT_EQ(CHDRV_VIDEO_OK, CHDRV_VIDEO_Term());
	//EXPECT_EQ(CHDRV_VIDEO_OK, CHDRV_VIDEO_Init());
}


CASE_F(TEST_VIDEO_INIT3,
	"����CHDRV_VIDEO_GetVersion�Ƿ�ɹ�") {
	CHDRV_Version_t stru_Ver;
	
	memset(&stru_Ver, 0, sizeof(stru_Ver));
	//EXPECT_EQ(CHDRV_VIDEO_OK, CHDRV_VIDEO_GetVersion(&stru_Ver));
	//EXPECT_NE(0, stru_Ver);
	LOG("\nstru_Ver=%x\n", stru_Ver);
}
#endif /* ENABLE_TESTCASE */








