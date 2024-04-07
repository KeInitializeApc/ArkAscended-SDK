#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AdvancedEggToolTipWidget.AdvancedEggToolTipWidget_C
// (None)

class UClass* UAdvancedEggToolTipWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedEggToolTipWidget_C");

	return Clss;
}


// AdvancedEggToolTipWidget_C AdvancedEggToolTipWidget.Default__AdvancedEggToolTipWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdvancedEggToolTipWidget_C* UAdvancedEggToolTipWidget_C::GetDefaultObj()
{
	static class UAdvancedEggToolTipWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedEggToolTipWidget_C*>(UAdvancedEggToolTipWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


