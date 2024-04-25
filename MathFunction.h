#pragma once
#include <struct.h>
#include <assert.h>
#include <Novice.h>
#include <cmath>
#include <math.h>

//1.透視投影行列
Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

//2.正射影行列
Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

//3.ビューポート変換行列
Matrix4x4 MakeViewportMatrix(float left, float top, float width, float height, float minDepth, float maxDepth);

//数値表示
static const int kColumnWidth = 60;
static const int kRowHeight = 20;

void MatrixScreenPrint(int x, int y, const Matrix4x4& matrix);