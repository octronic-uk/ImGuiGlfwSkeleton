/*
 * Grid.h
 *
 * Created: 07 2017 by Ashley
 *
 * Copyright 2017 Octronic. All rights reserved.
 *
 * This file may be distributed under the terms of GNU Public License version
 * 3 (GPL v3) as defined by the Free Software Foundation (FSF). A copy of the
 * license should have been included with this file, or the project in which
 * this file belongs to. You may also find the details of GPL v3 at:
 * http://www.gnu.org/licenses/gpl-3.0.txt
 *
 * If you have any questions regarding the use of this file, feel free to
 * contact the author of this file, or the owner of the project in which
 * this file belongs to.
 */
#pragma once
#include "GLWidget.h"

using glm::vec3;
using glm::vec2;

namespace Coconut
{
    class GridDrawer : public GLWidget
    {
    public:

        GridDrawer(
            AppState* p,
            float majorSpacing = 100.0f,
            float minorSpacing = 10.0f,
            vec3 majorColour = vec3(0.0f),
            vec3 minorColour = vec3(0.4f)
        );

        ~GridDrawer() override;
        bool Init() override;
        void Update() override;

        float GetMajorSpacing();
        void  SetMajorSpacing(float);

        float GetMinorSpacing();
        void  SetMinorSpacing(float);

        float GetSize();
        void SetSize(float);
        void RecalculateGridLines();

        vec3 GetTranslation() const;
        void SetTranslation(vec3 translation);

        vec3 GetMajorColour() const;
        void SetMajorColour(vec3 majorColour);

        vec3 GetMinorColour() const;
        void SetMinorColour(vec3 minorColour);

    protected: // Member functions
        void InitMajorGridData();
        void InitMinorGridData();

    protected: // Variables
        float mMajorSpacing;
        float mMinorSpacing;
        vec3 mMajorColour;
        vec3 mMinorColour;
        vec2 mGridArea;
    };
}
