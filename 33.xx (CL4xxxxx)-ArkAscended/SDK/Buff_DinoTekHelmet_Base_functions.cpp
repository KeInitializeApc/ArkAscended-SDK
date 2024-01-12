#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
// (Actor)

class UClass* ABuff_DinoTekHelmet_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DinoTekHelmet_Base_C");

	return Clss;
}


// Buff_DinoTekHelmet_Base_C Buff_DinoTekHelmet_Base.Default__Buff_DinoTekHelmet_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DinoTekHelmet_Base_C* ABuff_DinoTekHelmet_Base_C::GetDefaultObj()
{
	static class ABuff_DinoTekHelmet_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DinoTekHelmet_Base_C*>(ABuff_DinoTekHelmet_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               ActiveStorm                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class ADayCycleManager*            CallFunc_GetDayCycleManager_ReturnValue                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<class AActor*>              CallFunc_GetElectricalStormValues_LocationRegions                (Edit, ExportObject, EditFixedSize, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetElectricalStormValues_CurrentRegion                  (BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// double                             CallFunc_GetElectricalStormValues_Radius                         (Edit, ConstParm, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetIsElectricalStorm_Return                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsDistanceLessThan_ReturnValue                          (ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_IsDistanceLessThan_Distance_ImplicitCast                (BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::IsElectricalStormActive(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface, bool* K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1, bool* K2Node_DynamicCast_bSuccess_2, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, class AActor** CallFunc_Array_Get_Item, bool CallFunc_DoesImplementInterface_ReturnValue, bool* CallFunc_IsDistanceLessThan_ReturnValue, float* CallFunc_IsDistanceLessThan_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsElectricalStormActive");

	Params::ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_GetDayCycleManager_ReturnValue = CallFunc_GetDayCycleManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface = K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface;
	Parms.K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1 = K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1;
	Parms.CallFunc_GetElectricalStormValues_LocationRegions = CallFunc_GetElectricalStormValues_LocationRegions;
	Parms.CallFunc_GetElectricalStormValues_CurrentRegion = CallFunc_GetElectricalStormValues_CurrentRegion;
	Parms.CallFunc_GetElectricalStormValues_Radius = CallFunc_GetElectricalStormValues_Radius;
	Parms.CallFunc_GetIsElectricalStorm_Return = CallFunc_GetIsElectricalStorm_Return;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_IsDistanceLessThan_ReturnValue != nullptr)
		*CallFunc_IsDistanceLessThan_ReturnValue = Parms.CallFunc_IsDistanceLessThan_ReturnValue;

	if (CallFunc_IsDistanceLessThan_Distance_ImplicitCast != nullptr)
		*CallFunc_IsDistanceLessThan_Distance_ImplicitCast = Parms.CallFunc_IsDistanceLessThan_Distance_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             OutSocketClampDelta                                              (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

void ABuff_DinoTekHelmet_Base_C::GetSocketClampDelta(double* OutSocketClampDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetSocketClampDelta");

	Params::ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutSocketClampDelta != nullptr)
		*OutSocketClampDelta = Parms.OutSocketClampDelta;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPSetupForInstigator");

	Params::ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 HUD                                                              (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// float                              XPos                                                             (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              YPos                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ScaleMult                                                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (Edit, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BPDrawTextCentered_Y_ImplicitCast                       (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_X_ImplicitCast                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

float ABuff_DinoTekHelmet_Base_C::BPDrawBuffStatusHUD(struct FLinearColor* CallFunc_MakeColor_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPDrawBuffStatusHUD");

	Params::ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params Parms{};

	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MakeColor_ReturnValue != nullptr)
		*CallFunc_MakeColor_ReturnValue = std::move(Parms.CallFunc_MakeColor_ReturnValue);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     AimAtLoc                                                         (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               bAllowed                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AStructurePreventionZoneVolume*CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue      (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_IsChildOfClassesSoftRef_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::IsAllowedToFire(struct FVector* ServerSpawnAtLoc, TArray<class AActor*>* Temp_object_Variable, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool* K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, struct FVector* CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, TArray<class AActor*>* Temp_object_Variable_1, struct FHitResult* CallFunc_LineTraceSingle_OutHit_1, bool* CallFunc_LineTraceSingle_ReturnValue_1, class UClass* CallFunc_ClassAssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_IsChildOfClassesSoftRef_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsAllowedToFire");

	Params::ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params Parms{};

	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ServerSpawnAtLoc != nullptr)
		*ServerSpawnAtLoc = std::move(Parms.ServerSpawnAtLoc);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

	if (K2Node_DynamicCast_AsSkeletal_Mesh_Component != nullptr)
		*K2Node_DynamicCast_AsSkeletal_Mesh_Component = Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_LineTraceSingle_OutHit != nullptr)
		*CallFunc_LineTraceSingle_OutHit = std::move(Parms.CallFunc_LineTraceSingle_OutHit);

	if (CallFunc_LineTraceSingle_ReturnValue != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue = Parms.CallFunc_LineTraceSingle_ReturnValue;

	if (CallFunc_BreakTransform_Location_1 != nullptr)
		*CallFunc_BreakTransform_Location_1 = std::move(Parms.CallFunc_BreakTransform_Location_1);

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = std::move(Parms.Temp_object_Variable_1);

	if (CallFunc_LineTraceSingle_OutHit_1 != nullptr)
		*CallFunc_LineTraceSingle_OutHit_1 = std::move(Parms.CallFunc_LineTraceSingle_OutHit_1);

	if (CallFunc_LineTraceSingle_ReturnValue_1 != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue_1 = Parms.CallFunc_LineTraceSingle_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsChildOfClassesSoftRef_ReturnValue != nullptr)
		*CallFunc_IsChildOfClassesSoftRef_ReturnValue = Parms.CallFunc_IsChildOfClassesSoftRef_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::HideBuffFromHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "HideBuffFromHUD");

	Params::ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTargetingEnabled                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::SetTargeting(bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "SetTargeting");

	Params::ABuff_DinoTekHelmet_Base_C_SetTargeting_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue_1                        (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast             (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::BuffTickClient(float* DeltaTime, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class UObject** CallFunc_GetDefaultObject_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, struct FVector* K2Node_Select_Default, struct FVector* K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BuffTickClient");

	Params::ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1 = K2Node_DynamicCast_AsPrimal_Dino_Character_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue_1 = CallFunc_VInterpTo_Constant_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetDefaultObject_ReturnValue = Parms.CallFunc_GetDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	if (CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast != nullptr)
		*CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast = Parms.CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDidAttack                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        Temp_name_Variable                                               (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue             (ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (Edit, ConstParm, BlueprintVisible, Transient, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::LocalDoAttack(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FName* Temp_name_Variable, class FName* Temp_name_Variable_1, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class FName* K2Node_Select_Default, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FVector* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "LocalDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff = CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff;
	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue = CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_name_Variable != nullptr)
		*Temp_name_Variable = Parms.Temp_name_Variable;

	if (Temp_name_Variable_1 != nullptr)
		*Temp_name_Variable_1 = Parms.Temp_name_Variable_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_DynamicCast_AsSkeletal_Mesh_Component != nullptr)
		*K2Node_DynamicCast_AsSkeletal_Mesh_Component = Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (CallFunc_LineTraceSingle_OutHit != nullptr)
		*CallFunc_LineTraceSingle_OutHit = std::move(Parms.CallFunc_LineTraceSingle_OutHit);

	if (CallFunc_LineTraceSingle_ReturnValue != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue = Parms.CallFunc_LineTraceSingle_ReturnValue;

	if (CallFunc_BreakHitResult_bBlockingHit != nullptr)
		*CallFunc_BreakHitResult_bBlockingHit = Parms.CallFunc_BreakHitResult_bBlockingHit;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                PlayAnim                                                         (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float ABuff_DinoTekHelmet_Base_C::PlayItemAnim(class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "PlayItemAnim");

	Params::ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params Parms{};

	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsSkeletal_Mesh_Component != nullptr)
		*K2Node_DynamicCast_AsSkeletal_Mesh_Component = Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TekSaddleItem                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UPrimalItem*                 RetVal                                                           (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::GetTekSaddleItem(class UPrimalItem** TekSaddleItem, int32 CallFunc_Add_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_Array_Length_ReturnValue, class UPrimalItem** CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetTekSaddleItem");

	Params::ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TekSaddleItem != nullptr)
		*TekSaddleItem = Parms.TekSaddleItem;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ActivateHelmet
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::ActivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ActivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DeactivateHelmet
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::DeactivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DeactivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PressedAltFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::PressedAltFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "PressedAltFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerActivateHelmet
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::DoServerActivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoServerActivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerDeactivateHelmet
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::DoServerDeactivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoServerDeactivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AimAtLoc                                                         (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::ServerDoAttack(struct FVector* ServerSpawnAtLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ServerDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerSpawnAtLoc != nullptr)
		*ServerSpawnAtLoc = std::move(Parms.ServerSpawnAtLoc);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AimAtLoc                                                         (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               bLeftSide                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::DoAttack(struct FVector* ServerSpawnAtLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_DoAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerSpawnAtLoc != nullptr)
		*ServerSpawnAtLoc = std::move(Parms.ServerSpawnAtLoc);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.CheckForItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::CheckForItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "CheckForItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        Temp_name_Variable                                               (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_AimAtLoc_1                                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc_1                            (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsAllowedToFire_bAllowed                                (Edit, ConstParm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_AimAtLoc                                      (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_bLeftSide                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc                              (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, Net, Parm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// class AActor*                      CallFunc_SpawnActorDeferred_ReturnValue                          (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterProjectile*          K2Node_DynamicCast_AsShooter_Projectile                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimMontage*                K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_3                               (BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_Tek_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsShipping_ReturnValue                                  (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasEngram_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             CallFunc_GetSocketClampDelta_OutSocketClampDelta                 (Edit, ConstParm, ExportObject, Parm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_ClampRotAxis_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_ClampRotAxis_ReturnValue_1                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsElectricalStormActive_Return                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1               (BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

float ABuff_DinoTekHelmet_Base_C::ExecuteUbergraph_Buff_DinoTekHelmet_Base(bool Temp_bool_Variable, class FName* Temp_name_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, const struct FVector& K2Node_CustomEvent_AimAtLoc_1, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc_1, bool* CallFunc_IsAllowedToFire_bAllowed, const struct FVector& K2Node_CustomEvent_AimAtLoc, bool K2Node_CustomEvent_bLeftSide, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc, class FName* Temp_name_Variable_1, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class FName* K2Node_Select_Default, class USkeletalMeshComponent** K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool* K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, class AShooterProjectile* K2Node_DynamicCast_AsShooter_Projectile, bool* K2Node_DynamicCast_bSuccess_2, class UAnimMontage** K2Node_Select_Default_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsTimeSince_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, class UPrimalItemArmor_SaddleGeneric_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek, bool* K2Node_DynamicCast_bSuccess_3, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_4, class AController** CallFunc_GetController_ReturnValue, bool* K2Node_DynamicCast_bSuccess_5, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess_6, bool* CallFunc_HasEngram_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_7, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool* CallFunc_ClassIsChildOf_ReturnValue, bool* CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ExecuteUbergraph_Buff_DinoTekHelmet_Base");

	Params::ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.K2Node_CustomEvent_AimAtLoc_1 = K2Node_CustomEvent_AimAtLoc_1;
	Parms.K2Node_CustomEvent_ServerSpawnAtLoc_1 = K2Node_CustomEvent_ServerSpawnAtLoc_1;
	Parms.K2Node_CustomEvent_AimAtLoc = K2Node_CustomEvent_AimAtLoc;
	Parms.K2Node_CustomEvent_bLeftSide = K2Node_CustomEvent_bLeftSide;
	Parms.K2Node_CustomEvent_ServerSpawnAtLoc = K2Node_CustomEvent_ServerSpawnAtLoc;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Projectile = K2Node_DynamicCast_AsShooter_Projectile;
	Parms.CallFunc_IsTimeSince_ReturnValue_2 = CallFunc_IsTimeSince_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_3 = CallFunc_IsTimeSince_ReturnValue_3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_GetSocketClampDelta_OutSocketClampDelta = CallFunc_GetSocketClampDelta_OutSocketClampDelta;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_name_Variable != nullptr)
		*Temp_name_Variable = Parms.Temp_name_Variable;

	if (CallFunc_IsAllowedToFire_bAllowed != nullptr)
		*CallFunc_IsAllowedToFire_bAllowed = Parms.CallFunc_IsAllowedToFire_bAllowed;

	if (Temp_name_Variable_1 != nullptr)
		*Temp_name_Variable_1 = Parms.Temp_name_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_DynamicCast_AsSkeletal_Mesh_Component != nullptr)
		*K2Node_DynamicCast_AsSkeletal_Mesh_Component = Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_SpawnActorDeferred_ReturnValue != nullptr)
		*CallFunc_SpawnActorDeferred_ReturnValue = Parms.CallFunc_SpawnActorDeferred_ReturnValue;

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_GetController_ReturnValue != nullptr)
		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (CallFunc_HasEngram_ReturnValue != nullptr)
		*CallFunc_HasEngram_ReturnValue = Parms.CallFunc_HasEngram_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_7 != nullptr)
		*K2Node_DynamicCast_bSuccess_7 = Parms.K2Node_DynamicCast_bSuccess_7;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetEquippedItemOfType_ReturnValue != nullptr)
		*CallFunc_GetEquippedItemOfType_ReturnValue = Parms.CallFunc_GetEquippedItemOfType_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_ClassIsChildOf_ReturnValue != nullptr)
		*CallFunc_ClassIsChildOf_ReturnValue = Parms.CallFunc_ClassIsChildOf_ReturnValue;

	if (CallFunc_IsElectricalStormActive_Return != nullptr)
		*CallFunc_IsElectricalStormActive_Return = Parms.CallFunc_IsElectricalStormActive_Return;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

	if (CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast != nullptr)
		*CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast = Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;

	if (CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1 != nullptr)
		*CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1 = Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


