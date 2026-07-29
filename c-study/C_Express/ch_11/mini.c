#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DANGER_DIST   20.0      // 위험 거리
#define WARNING_DIST  50.0      // 주의 거리

void getSensorData(double *p) {
    for (int i = 0; i < 3; i++) {
        p[i] = (double)(rand() % 100);
    }
}

void analyzeAndControl(const double *data) {
    const char *sensor_name[] = {"왼쪽", "중간", "오른쪽"};
    
    printf("\n=== 센서 분석 결과 ===\n");
    for (int i = 0; i < 3; i++) {
        printf("[%s 센서] %.2lfm - ", sensor_name[i], data[i]);
        if (data[i] < DANGER_DIST) {
            printf("🚨 위험! 즉시 정지!\n");
        } else if (data[i] < WARNING_DIST) {
            printf("⚠️  주의! 감속 필요\n");
        } else {
            printf("✅ 안전\n");
        }
    }
    
    printf("\n=== 핸들 조작 판단 ===\n");
    if (data[1] < DANGER_DIST) {
        // 중앙이 위험하면 좌우 비교해서 회피
        if (data[0] > data[2]) {
            printf("→ 왼쪽으로 회피 (좌측 여유: %.2lfm)\n", data[0]);
        } else {
            printf("→ 오른쪽으로 회피 (우측 여유: %.2lfm)\n", data[2]);
        }
    } else if (data[0] < WARNING_DIST && data[2] >= WARNING_DIST) {
        printf("→ 우측으로 살짝 조향\n");
    } else if (data[2] < WARNING_DIST && data[0] >= WARNING_DIST) {
        printf("→ 좌측으로 살짝 조향\n");
    } else {
        printf("→ 직진 유지\n");
    }
}

int main(void) {
    srand((unsigned)time(NULL));
    
    double sensorData[3];
    getSensorData(sensorData);
    
    printf("왼쪽 센서와 장애물과의 거리: %.2lf\n", sensorData[0]);
    printf("중간 센서와 장애물과의 거리: %.2lf\n", sensorData[1]);
    printf("오른쪽 센서와 장애물과의 거리: %.2lf\n", sensorData[2]);
    
    analyzeAndControl(sensorData);
    
    return 0;
}
