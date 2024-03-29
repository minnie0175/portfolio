#include "main.h"

void surfaceCreated(AAssetManager* aAssetManager) {

    // set clear color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // enable depth test
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // setup scene
    Scene::setup(aAssetManager);
}

void surfaceChanged(int width, int height) {

    // set viewport
    glViewport(0, 0, width, height);

    // set scene screen
    Scene::screen(width, height);
}

void drawFrame(float deltaTime) {

    // clear color buffer and depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // update scene
    Scene::update(deltaTime);
}

void dragScreen(float dx, float dy){
    Scene::dragScreen(dx,dy);
}