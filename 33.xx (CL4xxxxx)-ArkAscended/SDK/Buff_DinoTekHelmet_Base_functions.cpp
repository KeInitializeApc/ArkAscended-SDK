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
// bool                               Return                                                           (Edit, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               ActiveStorm                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class ADayCycleManager*            CallFunc_GetDayCycleManager_ReturnValue                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface          (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1        (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// TArray<class AActor*>              CallFunc_GetElectricalStormValues_LocationRegions                (Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetElectricalStormValues_CurrentRegion                  (DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetElectricalStormValues_Radius                         (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetIsElectricalStorm_Return                             (ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsDistanceLessThan_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_IsDistanceLessThan_Distance_ImplicitCast                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::IsElectricalStormActive(bool* Return, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, bool* CallFunc_IsDistanceLessThan_ReturnValue, float CallFunc_IsDistanceLessThan_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsElectricalStormActive");

	Params::ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface = K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface;
	Parms.K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1 = K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1;
	Parms.CallFunc_GetElectricalStormValues_LocationRegions = CallFunc_GetElectricalStormValues_LocationRegions;
	Parms.CallFunc_GetElectricalStormValues_CurrentRegion = CallFunc_GetElectricalStormValues_CurrentRegion;
	Parms.CallFunc_GetElectricalStormValues_Radius = CallFunc_GetElectricalStormValues_Radius;
	Parms.CallFunc_GetIsElectricalStorm_Return = CallFunc_GetIsElectricalStorm_Return;
	Parms.CallFunc_IsDistanceLessThan_Distance_ImplicitCast = CallFunc_IsDistanceLessThan_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (CallFunc_IsDistanceLessThan_ReturnValue != nullptr)
		*CallFunc_IsDistanceLessThan_ReturnValue = Parms.CallFunc_IsDistanceLessThan_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             OutSocketClampDelta                                              (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

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
// class AActor*                      ForInstigator                                                    (EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPSetupForInstigator");

	Params::ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 HUD                                                              (BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
// float                              XPos                                                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              YPos                                                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ScaleMult                                                        (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ExportObject, Net, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPDrawTextCentered_Y_ImplicitCast                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_X_ImplicitCast                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

float ABuff_DinoTekHelmet_Base_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, struct FLinearColor* CallFunc_MakeColor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetItemStatModifier_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPDrawBuffStatusHUD");

	Params::ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params Parms{};

	Parms.HUD = HUD;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MakeColor_ReturnValue != nullptr)
		*CallFunc_MakeColor_ReturnValue = std::move(Parms.CallFunc_MakeColor_ReturnValue);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     AimAtLoc                                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               bAllowed                                                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class AStructurePreventionZoneVolume*CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_IsChildOfClassesSoftRef_ReturnValue                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

class AStructurePreventionZoneVolume* ABuff_DinoTekHelmet_Base_C::IsAllowedToFire(struct FVector* ServerSpawnAtLoc, const TArray<class AActor*>& Temp_object_Variable, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const TArray<class AActor*>& Temp_object_Variable_1, struct FHitResult* CallFunc_LineTraceSingle_OutHit_1, bool* CallFunc_LineTraceSingle_ReturnValue_1, class UClass* CallFunc_ClassAssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_IsChildOfClassesSoftRef_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsAllowedToFire");

	Params::ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_IsChildOfClassesSoftRef_ReturnValue = CallFunc_IsChildOfClassesSoftRef_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ServerSpawnAtLoc != nullptr)
		*ServerSpawnAtLoc = std::move(Parms.ServerSpawnAtLoc);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_LineTraceSingle_OutHit != nullptr)
		*CallFunc_LineTraceSingle_OutHit = std::move(Parms.CallFunc_LineTraceSingle_OutHit);

	if (CallFunc_LineTraceSingle_ReturnValue != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue = Parms.CallFunc_LineTraceSingle_ReturnValue;

	if (CallFunc_LineTraceSingle_OutHit_1 != nullptr)
		*CallFunc_LineTraceSingle_OutHit_1 = std::move(Parms.CallFunc_LineTraceSingle_OutHit_1);

	if (CallFunc_LineTraceSingle_ReturnValue_1 != nullptr)
		*CallFunc_LineTraceSingle_ReturnValue_1 = Parms.CallFunc_LineTraceSingle_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::HideBuffFromHUD(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "HideBuffFromHUD");

	Params::ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTargetingEnabled                                                (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::SetTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "SetTargeting");

	Params::ABuff_DinoTekHelmet_Base_C_SetTargeting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue_1                        (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::BuffTickClient(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, struct FVector* K2Node_Select_Default, struct FVector* K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BuffTickClient");

	Params::ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue_1 = CallFunc_VInterpTo_Constant_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

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
// bool                               bDidAttack                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class FName                        Temp_name_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue             (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ExportObject, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (BlueprintVisible, ExportObject, ZeroConstructor, Config, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (BlueprintVisible, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ExportObject, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (BlueprintVisible, Parm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::LocalDoAttack(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class FName* K2Node_Select_Default, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FVector* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "LocalDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params Parms{};

	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff = CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff;
	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue = CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

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

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

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
// class UAnimMontage*                PlayAnim                                                         (BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::PlayItemAnim(class UAnimMontage* PlayAnim, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float* CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "PlayItemAnim");

	Params::ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params Parms{};

	Parms.PlayAnim = PlayAnim;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Montage_Play_ReturnValue != nullptr)
		*CallFunc_Montage_Play_ReturnValue = Parms.CallFunc_Montage_Play_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TekSaddleItem                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 RetVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::GetTekSaddleItem(class UPrimalItem** TekSaddleItem, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetTekSaddleItem");

	Params::ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (TekSaddleItem != nullptr)
		*TekSaddleItem = Parms.TekSaddleItem;

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
// struct FVector                     AimAtLoc                                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

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
// struct FVector                     AimAtLoc                                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               bLeftSide                                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FName                        Temp_name_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_AimAtLoc_1                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc_1                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsAllowedToFire_bAllowed                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_AimAtLoc                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_bLeftSide                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_SpawnActorDeferred_ReturnValue                          (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterProjectile*          K2Node_DynamicCast_AsShooter_Projectile                          (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference, NonTransactional)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_Tek_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek        (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsShipping_ReturnValue                                  (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_HasEngram_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (Edit, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_GetSocketClampDelta_OutSocketClampDelta                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ClampRotAxis_ReturnValue                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ClampRotAxis_ReturnValue_1                              (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsElectricalStormActive_Return                          (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1               (EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)

float ABuff_DinoTekHelmet_Base_C::ExecuteUbergraph_Buff_DinoTekHelmet_Base(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, const struct FVector& K2Node_CustomEvent_AimAtLoc_1, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc_1, bool CallFunc_IsAllowedToFire_bAllowed, const struct FVector& K2Node_CustomEvent_AimAtLoc, bool K2Node_CustomEvent_bLeftSide, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class FName* K2Node_Select_Default, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, class AShooterProjectile* K2Node_DynamicCast_AsShooter_Projectile, class UAnimMontage** K2Node_Select_Default_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, class UPrimalItemArmor_SaddleGeneric_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool* CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ExecuteUbergraph_Buff_DinoTekHelmet_Base");

	Params::ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params Parms{};

	Parms.K2Node_CustomEvent_AimAtLoc_1 = K2Node_CustomEvent_AimAtLoc_1;
	Parms.K2Node_CustomEvent_ServerSpawnAtLoc_1 = K2Node_CustomEvent_ServerSpawnAtLoc_1;
	Parms.CallFunc_IsAllowedToFire_bAllowed = CallFunc_IsAllowedToFire_bAllowed;
	Parms.K2Node_CustomEvent_AimAtLoc = K2Node_CustomEvent_AimAtLoc;
	Parms.K2Node_CustomEvent_bLeftSide = K2Node_CustomEvent_bLeftSide;
	Parms.K2Node_CustomEvent_ServerSpawnAtLoc = K2Node_CustomEvent_ServerSpawnAtLoc;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Projectile = K2Node_DynamicCast_AsShooter_Projectile;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_GetSocketClampDelta_OutSocketClampDelta = CallFunc_GetSocketClampDelta_OutSocketClampDelta;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

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

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_CanElementDecrease_CanDecrease != nullptr)
		*CallFunc_CanElementDecrease_CanDecrease = Parms.CallFunc_CanElementDecrease_CanDecrease;

	if (K2Node_DynamicCast_AsShooter_Player_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_State = Parms.K2Node_DynamicCast_AsShooter_Player_State;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

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


