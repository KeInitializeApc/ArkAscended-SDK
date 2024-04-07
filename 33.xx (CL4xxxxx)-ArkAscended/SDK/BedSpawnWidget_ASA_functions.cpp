#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BedSpawnWidget_ASA.BedSpawnWidget_ASA_C
// (None)

class UClass* UBedSpawnWidget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BedSpawnWidget_ASA_C");

	return Clss;
}


// BedSpawnWidget_ASA_C BedSpawnWidget_ASA.Default__BedSpawnWidget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBedSpawnWidget_ASA_C* UBedSpawnWidget_ASA_C::GetDefaultObj()
{
	static class UBedSpawnWidget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBedSpawnWidget_ASA_C*>(UBedSpawnWidget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBedIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BedIcon                                                          (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBedSpawnWidget_ASA_C::SetupBedIcon(class UTexture2D* BedIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "SetupBedIcon");

	Params::UBedSpawnWidget_ASA_C_SetupBedIcon_Params Parms{};

	Parms.BedIcon = BedIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Get_Image_DefaultDestination_ColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_MakeColor_A_ImplicitCast                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UBedSpawnWidget_ASA_C::Get_Image_DefaultDestination_ColorAndOpacity(double CallFunc_SelectFloat_ReturnValue, struct FLinearColor* CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "Get_Image_DefaultDestination_ColorAndOpacity");

	Params::UBedSpawnWidget_ASA_C_Get_Image_DefaultDestination_ColorAndOpacity_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeColor_A_ImplicitCast = CallFunc_MakeColor_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MakeColor_ReturnValue != nullptr)
		*CallFunc_MakeColor_ReturnValue = std::move(Parms.CallFunc_MakeColor_ReturnValue);

	return Parms.ReturnValue;

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBedSpawnWidget_ASA_C::BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBedSpawnWidget_ASA_C::SetSelected(bool* Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "SetSelected");

	Params::UBedSpawnWidget_ASA_C_SetSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Selected != nullptr)
		*Selected = Parms.Selected;

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SpawnPointID                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             NextAllowedUseTime                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowedUse                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class FString                      BedName                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIsDefaultDest                                                   (ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString UBedSpawnWidget_ASA_C::SetupBed(struct FVector* Location, bool bIsDefaultDest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "SetupBed");

	Params::UBedSpawnWidget_ASA_C_SetupBed_Params Parms{};

	Parms.bIsDefaultDest = bIsDefaultDest;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetQuantityBeds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UBedSpawnWidget_ASA_C::SetQuantityBeds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "SetQuantityBeds");

	Params::UBedSpawnWidget_ASA_C_SetQuantityBeds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBedSpawnWidget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.ExecuteUbergraph_BedSpawnWidget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_Selected                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_SpawnPointID                                        (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             K2Node_Event_NextAllowedUseTime                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_bAllowedUse                                         (ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_Location                                            (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      K2Node_Event_BedName                                             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_bIsDefaultDest                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              K2Node_CustomEvent_Quantity                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UBedSpawnWidget_ASA_C::ExecuteUbergraph_BedSpawnWidget_ASA(int32* EntryPoint, bool K2Node_CustomEvent_Selected, int32* K2Node_Event_SpawnPointID, double* K2Node_Event_NextAllowedUseTime, bool* K2Node_Event_bAllowedUse, struct FVector* K2Node_Event_Location, class FString* K2Node_Event_BedName, bool* K2Node_Event_bIsDefaultDest, int32 K2Node_CustomEvent_Quantity, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "ExecuteUbergraph_BedSpawnWidget_ASA");

	Params::UBedSpawnWidget_ASA_C_ExecuteUbergraph_BedSpawnWidget_ASA_Params Parms{};

	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_CustomEvent_Quantity = K2Node_CustomEvent_Quantity;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_SpawnPointID != nullptr)
		*K2Node_Event_SpawnPointID = Parms.K2Node_Event_SpawnPointID;

	if (K2Node_Event_NextAllowedUseTime != nullptr)
		*K2Node_Event_NextAllowedUseTime = Parms.K2Node_Event_NextAllowedUseTime;

	if (K2Node_Event_bAllowedUse != nullptr)
		*K2Node_Event_bAllowedUse = Parms.K2Node_Event_bAllowedUse;

	if (K2Node_Event_Location != nullptr)
		*K2Node_Event_Location = std::move(Parms.K2Node_Event_Location);

	if (K2Node_Event_BedName != nullptr)
		*K2Node_Event_BedName = std::move(Parms.K2Node_Event_BedName);

	if (K2Node_Event_bIsDefaultDest != nullptr)
		*K2Node_Event_bIsDefaultDest = Parms.K2Node_Event_bIsDefaultDest;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBedSpawnWidget_ASA_C*       BedSpawn                                                         (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBedSpawnWidget_ASA_C::Clicked__DelegateSignature(class UBedSpawnWidget_ASA_C* BedSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BedSpawnWidget_ASA_C", "Clicked__DelegateSignature");

	Params::UBedSpawnWidget_ASA_C_Clicked__DelegateSignature_Params Parms{};

	Parms.BedSpawn = BedSpawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


