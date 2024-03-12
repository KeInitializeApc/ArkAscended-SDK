#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoTrackList_Entry_Overlay.DinoTrackList_Entry_Overlay_C
// (None)

class UClass* UDinoTrackList_Entry_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoTrackList_Entry_Overlay_C");

	return Clss;
}


// DinoTrackList_Entry_Overlay_C DinoTrackList_Entry_Overlay.Default__DinoTrackList_Entry_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoTrackList_Entry_Overlay_C* UDinoTrackList_Entry_Overlay_C::GetDefaultObj()
{
	static class UDinoTrackList_Entry_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoTrackList_Entry_Overlay_C*>(UDinoTrackList_Entry_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DinoTrackList_Entry_Overlay.DinoTrackList_Entry_Overlay_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UDinoTrackList_Entry_Overlay_C::OnPaint(struct FPaintContext* Context, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsHovered_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DinoTrackList_Entry_Overlay_C", "OnPaint");

	Params::UDinoTrackList_Entry_Overlay_C_OnPaint_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}

}


