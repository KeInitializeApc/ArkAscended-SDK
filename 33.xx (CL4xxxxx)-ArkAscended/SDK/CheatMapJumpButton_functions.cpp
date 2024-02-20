#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMapJumpButton.CheatMapJumpButton_C
// (None)

class UClass* UCheatMapJumpButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMapJumpButton_C");

	return Clss;
}


// CheatMapJumpButton_C CheatMapJumpButton.Default__CheatMapJumpButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMapJumpButton_C* UCheatMapJumpButton_C::GetDefaultObj()
{
	static class UCheatMapJumpButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMapJumpButton_C*>(UCheatMapJumpButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMapJumpButton.CheatMapJumpButton_C.SetMapJumpInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// double                             K2Node_VariableSet_Yaw_ImplicitCast                              (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

double UCheatMapJumpButton_C::SetMapJumpInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMapJumpButton_C", "SetMapJumpInfo");

	Params::UCheatMapJumpButton_C_SetMapJumpInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CheatMapJumpButton.CheatMapJumpButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMapJumpButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMapJumpButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMapJumpButton.CheatMapJumpButton_C.ExecuteUbergraph_CheatMapJumpButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)

class FString UCheatMapJumpButton_C::ExecuteUbergraph_CheatMapJumpButton(class FString* CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue, class FString* CallFunc_Conv_DoubleToString_ReturnValue_1, class FString* CallFunc_Conv_DoubleToString_ReturnValue_2, class FString* CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMapJumpButton_C", "ExecuteUbergraph_CheatMapJumpButton");

	Params::UCheatMapJumpButton_C_ExecuteUbergraph_CheatMapJumpButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_DoubleToString_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue);

	if (CallFunc_Conv_DoubleToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue_1);

	if (CallFunc_Conv_DoubleToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	return Parms.ReturnValue;

}

}


