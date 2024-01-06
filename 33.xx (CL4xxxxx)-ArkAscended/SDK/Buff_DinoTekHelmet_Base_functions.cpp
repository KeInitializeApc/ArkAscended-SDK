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
// bool                               Return                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               ActiveStorm                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ADayCycleManager*            CallFunc_GetDayCycleManager_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TArray<class AActor*>              CallFunc_GetElectricalStormValues_LocationRegions                (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetElectricalStormValues_CurrentRegion                  (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_GetElectricalStormValues_Radius                         (Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetIsElectricalStorm_Return                             (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsDistanceLessThan_ReturnValue                          (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_IsDistanceLessThan_Distance_ImplicitCast                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

double ABuff_DinoTekHelmet_Base_C::IsElectricalStormActive(bool Return, bool* ActiveStorm, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, double CallFunc_BreakVector_Z, class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool* CallFunc_IsDistanceLessThan_ReturnValue, float* CallFunc_IsDistanceLessThan_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsElectricalStormActive");

	Params::ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params Parms{};

	Parms.Return = Return;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetDayCycleManager_ReturnValue = CallFunc_GetDayCycleManager_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetElectricalStormValues_LocationRegions = CallFunc_GetElectricalStormValues_LocationRegions;
	Parms.CallFunc_GetElectricalStormValues_CurrentRegion = CallFunc_GetElectricalStormValues_CurrentRegion;
	Parms.CallFunc_GetElectricalStormValues_Radius = CallFunc_GetElectricalStormValues_Radius;
	Parms.CallFunc_GetIsElectricalStorm_Return = CallFunc_GetIsElectricalStorm_Return;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveStorm != nullptr)
		*ActiveStorm = Parms.ActiveStorm;

	if (CallFunc_K2_GetActorLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue);

	if (CallFunc_K2_GetActorLocation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue_1);

	if (CallFunc_IsDistanceLessThan_ReturnValue != nullptr)
		*CallFunc_IsDistanceLessThan_ReturnValue = Parms.CallFunc_IsDistanceLessThan_ReturnValue;

	if (CallFunc_IsDistanceLessThan_Distance_ImplicitCast != nullptr)
		*CallFunc_IsDistanceLessThan_Distance_ImplicitCast = Parms.CallFunc_IsDistanceLessThan_Distance_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             OutSocketClampDelta                                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

double ABuff_DinoTekHelmet_Base_C::GetSocketClampDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetSocketClampDelta");

	Params::ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPSetupForInstigator");

	Params::ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 HUD                                                              (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// float                              XPos                                                             (Edit, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              YPos                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ScaleMult                                                        (ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_FFloor_ReturnValue                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_ReturnValue                          (Edit, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BPDrawTextCentered_Y_ImplicitCast                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BPDrawTextCentered_X_ImplicitCast                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

double ABuff_DinoTekHelmet_Base_C::BPDrawBuffStatusHUD(struct FLinearColor* CallFunc_MakeColor_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, float* CallFunc_BPDrawTextCentered_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float* CallFunc_BPDrawTextCentered_Y_ImplicitCast, float* CallFunc_BPDrawTextCentered_X_ImplicitCast, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPDrawBuffStatusHUD");

	Params::ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params Parms{};

	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MakeColor_ReturnValue != nullptr)
		*CallFunc_MakeColor_ReturnValue = std::move(Parms.CallFunc_MakeColor_ReturnValue);

	if (CallFunc_Conv_IntToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_IntToDouble_ReturnValue = Parms.CallFunc_Conv_IntToDouble_ReturnValue;

	if (CallFunc_Concat_StrStr_ReturnValue != nullptr)
		*CallFunc_Concat_StrStr_ReturnValue = std::move(Parms.CallFunc_Concat_StrStr_ReturnValue);

	if (CallFunc_BPDrawTextCentered_ReturnValue != nullptr)
		*CallFunc_BPDrawTextCentered_ReturnValue = Parms.CallFunc_BPDrawTextCentered_ReturnValue;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast_1 != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1;

	if (CallFunc_BPDrawTextCentered_Y_ImplicitCast != nullptr)
		*CallFunc_BPDrawTextCentered_Y_ImplicitCast = Parms.CallFunc_BPDrawTextCentered_Y_ImplicitCast;

	if (CallFunc_BPDrawTextCentered_X_ImplicitCast != nullptr)
		*CallFunc_BPDrawTextCentered_X_ImplicitCast = Parms.CallFunc_BPDrawTextCentered_X_ImplicitCast;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     AimAtLoc                                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               bAllowed                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               RetVal                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable_1                                           (Edit, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AStructurePreventionZoneVolume*CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue      (ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_IsChildOfClassesSoftRef_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::IsAllowedToFire(struct FVector* AimAtLoc, bool* bAllowed, bool RetVal, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, struct FVector* CallFunc_BreakTransform_Scale_1, class UWorld* CallFunc_K2_GetWorld_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, class AStructurePreventionZoneVolume** CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue, int32* CallFunc_IsChildOfClassesSoftRef_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsAllowedToFire");

	Params::ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params Parms{};

	Parms.RetVal = RetVal;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AimAtLoc != nullptr)
		*AimAtLoc = std::move(Parms.AimAtLoc);

	if (bAllowed != nullptr)
		*bAllowed = Parms.bAllowed;

	if (CallFunc_K2_GetActorLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue);

	if (CallFunc_BreakTransform_Scale != nullptr)
		*CallFunc_BreakTransform_Scale = std::move(Parms.CallFunc_BreakTransform_Scale);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_BreakTransform_Scale_1 != nullptr)
		*CallFunc_BreakTransform_Scale_1 = std::move(Parms.CallFunc_BreakTransform_Scale_1);

	if (CallFunc_K2_GetActorLocation_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue_1 = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue_1);

	if (CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue != nullptr)
		*CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue = Parms.CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue;

	if (CallFunc_IsChildOfClassesSoftRef_ReturnValue != nullptr)
		*CallFunc_IsChildOfClassesSoftRef_ReturnValue = Parms.CallFunc_IsChildOfClassesSoftRef_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

void ABuff_DinoTekHelmet_Base_C::HideBuffFromHUD(bool* ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "HideBuffFromHUD");

	Params::ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTargetingEnabled                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void ABuff_DinoTekHelmet_Base_C::SetTargeting(bool* bTargetingEnabled, bool* CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "SetTargeting");

	Params::ABuff_DinoTekHelmet_Base_C_SetTargeting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bTargetingEnabled != nullptr)
		*bTargetingEnabled = Parms.bTargetingEnabled;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue_1                        (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast             (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::BuffTickClient(class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BuffTickClient");

	Params::ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params Parms{};

	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1;

	if (CallFunc_VInterpTo_Constant_ReturnValue != nullptr)
		*CallFunc_VInterpTo_Constant_ReturnValue = std::move(Parms.CallFunc_VInterpTo_Constant_ReturnValue);

	if (CallFunc_VInterpTo_Constant_ReturnValue_1 != nullptr)
		*CallFunc_VInterpTo_Constant_ReturnValue_1 = std::move(Parms.CallFunc_VInterpTo_Constant_ReturnValue_1);

	if (CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast != nullptr)
		*CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast = Parms.CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDidAttack                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        Temp_name_Variable                                               (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff               (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue             (ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (Edit, ExportObject, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, EditConst, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::LocalDoAttack(bool* bDidAttack, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool* CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, struct FVector* CallFunc_Add_VectorVector_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool* CallFunc_BPFastTrace_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "LocalDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff = CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;

	UObject::ProcessEvent(Func, &Parms);

	if (bDidAttack != nullptr)
		*bDidAttack = Parms.bDidAttack;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue != nullptr)
		*CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue = Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue;

	if (CallFunc_K2_GetActorLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_BreakTransform_Scale != nullptr)
		*CallFunc_BreakTransform_Scale = std::move(Parms.CallFunc_BreakTransform_Scale);

	if (CallFunc_Add_VectorVector_ReturnValue != nullptr)
		*CallFunc_Add_VectorVector_ReturnValue = std::move(Parms.CallFunc_Add_VectorVector_ReturnValue);

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

	if (CallFunc_BPFastTrace_ReturnValue != nullptr)
		*CallFunc_BPFastTrace_ReturnValue = Parms.CallFunc_BPFastTrace_ReturnValue;

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                PlayAnim                                                         (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float ABuff_DinoTekHelmet_Base_C::PlayItemAnim(class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "PlayItemAnim");

	Params::ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params Parms{};

	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TekSaddleItem                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UPrimalItem*                 RetVal                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool ABuff_DinoTekHelmet_Base_C::GetTekSaddleItem(class UPrimalItem* RetVal, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetTekSaddleItem");

	Params::ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params Parms{};

	Parms.RetVal = RetVal;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

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
// struct FVector                     AimAtLoc                                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::ServerDoAttack(struct FVector* AimAtLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ServerDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AimAtLoc != nullptr)
		*AimAtLoc = std::move(Parms.AimAtLoc);

	return Parms.ReturnValue;

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AimAtLoc                                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bLeftSide                                                        (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     ServerSpawnAtLoc                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

struct FVector ABuff_DinoTekHelmet_Base_C::DoAttack(struct FVector* AimAtLoc, bool* bLeftSide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_DoAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AimAtLoc != nullptr)
		*AimAtLoc = std::move(Parms.AimAtLoc);

	if (bLeftSide != nullptr)
		*bLeftSide = Parms.bLeftSide;

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
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        Temp_name_Variable                                               (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_AimAtLoc_1                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc_1                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsAllowedToFire_bAllowed                                (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_AimAtLoc                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_bLeftSide                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class FName                        Temp_name_Variable_1                                             (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_SpawnActorDeferred_ReturnValue                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterProjectile*          K2Node_DynamicCast_AsShooter_Projectile                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimMontage*                K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_3                               (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UPrimalItemArmor_SaddleGeneric_Tek_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek        (Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsShipping_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasEngram_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_GetSocketClampDelta_OutSocketClampDelta                 (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_ClampRotAxis_ReturnValue                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_ClampRotAxis_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsElectricalStormActive_Return                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1               (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast                       (Edit, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1                     (Edit, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)

struct FVector ABuff_DinoTekHelmet_Base_C::ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32 EntryPoint, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool* CallFunc_IsAllowedToFire_bAllowed, bool* CallFunc_Not_PreBool_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsTimeSince_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_HasEngram_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool* CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue_1, bool* CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_2, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ExecuteUbergraph_Buff_DinoTekHelmet_Base");

	Params::ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_2 = CallFunc_IsTimeSince_ReturnValue_2;
	Parms.CallFunc_IsTimeSince_ReturnValue_3 = CallFunc_IsTimeSince_ReturnValue_3;
	Parms.CallFunc_CanElementDecrease_CanDecrease = CallFunc_CanElementDecrease_CanDecrease;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.CallFunc_GetSocketClampDelta_OutSocketClampDelta = CallFunc_GetSocketClampDelta_OutSocketClampDelta;
	Parms.CallFunc_ClampRotAxis_ReturnValue = CallFunc_ClampRotAxis_ReturnValue;
	Parms.CallFunc_ClampRotAxis_ReturnValue_1 = CallFunc_ClampRotAxis_ReturnValue_1;
	Parms.CallFunc_ClampRotAxis_MaxDiff_ImplicitCast = CallFunc_ClampRotAxis_MaxDiff_ImplicitCast;
	Parms.CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1 = CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsAllowedToFire_bAllowed != nullptr)
		*CallFunc_IsAllowedToFire_bAllowed = Parms.CallFunc_IsAllowedToFire_bAllowed;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_BreakTransform_Scale != nullptr)
		*CallFunc_BreakTransform_Scale = std::move(Parms.CallFunc_BreakTransform_Scale);

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

	if (CallFunc_Add_VectorVector_ReturnValue != nullptr)
		*CallFunc_Add_VectorVector_ReturnValue = std::move(Parms.CallFunc_Add_VectorVector_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Normal_ReturnValue != nullptr)
		*CallFunc_Normal_ReturnValue = std::move(Parms.CallFunc_Normal_ReturnValue);

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (CallFunc_HasEngram_ReturnValue != nullptr)
		*CallFunc_HasEngram_ReturnValue = Parms.CallFunc_HasEngram_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_ClassIsChildOf_ReturnValue != nullptr)
		*CallFunc_ClassIsChildOf_ReturnValue = Parms.CallFunc_ClassIsChildOf_ReturnValue;

	if (CallFunc_IsElectricalStormActive_Return != nullptr)
		*CallFunc_IsElectricalStormActive_Return = Parms.CallFunc_IsElectricalStormActive_Return;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;

	if (CallFunc_BooleanAND_ReturnValue_2 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_2 = Parms.CallFunc_BooleanAND_ReturnValue_2;

	if (CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast != nullptr)
		*CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast = Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;

	if (CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1 != nullptr)
		*CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1 = Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


