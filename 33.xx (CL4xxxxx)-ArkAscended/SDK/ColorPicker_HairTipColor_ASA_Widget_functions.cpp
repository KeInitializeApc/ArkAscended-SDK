#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C
// (None)

class UClass* UColorPicker_HairTipColor_ASA_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorPicker_HairTipColor_ASA_Widget_C");

	return Clss;
}


// ColorPicker_HairTipColor_ASA_Widget_C ColorPicker_HairTipColor_ASA_Widget.Default__ColorPicker_HairTipColor_ASA_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorPicker_HairTipColor_ASA_Widget_C* UColorPicker_HairTipColor_ASA_Widget_C::GetDefaultObj()
{
	static class UColorPicker_HairTipColor_ASA_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorPicker_HairTipColor_ASA_Widget_C*>(UColorPicker_HairTipColor_ASA_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C.UpdateColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UColorPicker_HairTipColor_ASA_Widget_C::UpdateColor(struct FVector2D* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_HairTipColor_ASA_Widget_C", "UpdateColor");

	Params::UColorPicker_HairTipColor_ASA_Widget_C_UpdateColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C.ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector2D                   K2Node_CustomEvent_Color                                         (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

void UColorPicker_HairTipColor_ASA_Widget_C::ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget(int32* EntryPoint, const struct FVector2D& K2Node_CustomEvent_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_HairTipColor_ASA_Widget_C", "ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget");

	Params::UColorPicker_HairTipColor_ASA_Widget_C_ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget_Params Parms{};

	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


