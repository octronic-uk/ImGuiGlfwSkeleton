#pragma once

#include "Window.h"

// ImGui Widgets
#include "Widgets/ImGui/MenuBar.h"
#include "Widgets/ImGui/GLPreviewWindow.h"

// GL Widgets
#include "Widgets/GL/GridDrawer.h"

namespace Coconut
{
	class AppState
	{
	public:
		AppState(int argc, char** argv);
        bool Init();
        bool Run();

        bool GetLooping() const;
        void SetLooping(bool looping);

        Window& GetWindow();
        GLPreviewWindow& GetPreviewWindow();

    protected:
        bool CreateImGuiWidgets();
        bool CreateGLWidgets();

    private:
        bool mLooping;
        int mArgc;
        char** mArgv;
        Window mWindow;
        // ImGui Widgets
        MenuBar mMenuBar;
        GLPreviewWindow mPreviewWindow;
        // GL Widgets
        GridDrawer mGridDrawer;
	};
}
