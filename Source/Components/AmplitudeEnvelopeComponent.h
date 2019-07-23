/*
 * This file is part of the KandVST synthesizer.
 *
 * Copyright (c) 2018   Lukas Rahmn, Anton Fredriksson,
 *                      Sarosh Nasir, Stanisław Zwierzchowski,
 *                      Klas Ludvigsson and Andreas Kuszli
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef AMP_ENVELOPE_COMPONENT_H
#define AMP_ENVELOPE_COMPONENT_H

#include "Global.h"
#include "ParameterHandler.h"
#include "../JuceLibraryCode/JuceHeader.h"
#include "ParameterSlider.h"
#include "IVSTParameters.h"
#include "OurLookAndFeel.h"
#include "EnvelopeGenerator.h"
#include "ParameterListener.h"
#include "EnvelopeComponent.h"
class AmplitudeEnvelopeComponent : public EnvelopeComponent {

public:
	AmplitudeEnvelopeComponent(int ID, GLOBAL* global)
		: EnvelopeComponent(ID, global, String("")) {};
	//~AmplitudeEnvelopeComponent();

};
#endif
