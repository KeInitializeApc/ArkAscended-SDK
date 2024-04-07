#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C
// (None)

class UClass* USpawnRegionWidget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnRegionWidget_ASA_C");

	return Clss;
}


// SpawnRegionWidget_ASA_C SpawnRegionWidget_ASA.Default__SpawnRegionWidget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpawnRegionWidget_ASA_C* USpawnRegionWidget_ASA_C::GetDefaultObj()
{
	static class USpawnRegionWidget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnRegionWidget_ASA_C*>(USpawnRegionWidget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnRegionWidget_ASA_C::BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnRegionWidget_ASA_C", "BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USpawnRegionWidget_ASA_C::SetSelected(bool* Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnRegionWidget_ASA_C", "SetSelected");

	Params::USpawnRegionWidget_ASA_C_SetSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Selected != nullptr)
		*Selected = Parms.Selected;

}


// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetDifficult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Difficult                                                        (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USpawnRegionWidget_ASA_C::SetDifficult(int32 Difficult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnRegionWidget_ASA_C", "SetDifficult");

	Params::USpawnRegionWidget_ASA_C_SetDifficult_Params Parms{};

	Parms.Difficult = Difficult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpawnRegionWidget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnRegionWidget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.ExecuteUbergraph_SpawnRegionWidget_ASA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_Selected                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              K2Node_CustomEvent_Difficult                                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUMGSequencePlayer* USpawnRegionWidget_ASA_C::ExecuteUbergraph_SpawnRegionWidget_ASA(int32* EntryPoint, bool K2Node_CustomEvent_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnRegionWidget_ASA_C", "ExecuteUbergraph_SpawnRegionWidget_ASA");

	Params::USpawnRegionWidget_ASA_C_ExecuteUbergraph_SpawnRegionWidget_ASA_Params Parms{};

	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}


// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnRegionWidget_ASA_C*    SpawnRegion                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class USpawnRegionWidget_ASA_C* USpawnRegionWidget_ASA_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnRegionWidget_ASA_C", "Clicked__DelegateSignature");

	Params::USpawnRegionWidget_ASA_C_Clicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


