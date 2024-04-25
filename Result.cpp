#include "Result.h"

Result::Result()
{
}

void Result::Updata()
{
}

void Result::Draw()
{
	MatrixScreenPrint(0, 0, orthographicMatrix);
	MatrixScreenPrint(0, kRowHeight * 5, perspectiveFovMatrix);
	MatrixScreenPrint(0, kRowHeight * 10, viewportMatrix);
}
