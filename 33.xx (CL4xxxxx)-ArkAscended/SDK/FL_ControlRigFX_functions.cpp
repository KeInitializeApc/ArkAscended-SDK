#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_ControlRigFX.FL_ControlRigFX_C
// (None)

class UClass* UFL_ControlRigFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_ControlRigFX_C");

	return Clss;
}


// FL_ControlRigFX_C FL_ControlRigFX.Default__FL_ControlRigFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_ControlRigFX_C* UFL_ControlRigFX_C::GetDefaultObj()
{
	static class UFL_ControlRigFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_ControlRigFX_C*>(UFL_ControlRigFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_ControlRigFX.FL_ControlRigFX_C.Spawn Phys Mat VFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bone_Name                                                        (ConstParm, ExportObject, Net, OutParm, Config, SubobjectReference)
// class APrimalCharacter*            Creature                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// class UPhysicalMaterial*           Phys_Material                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
// struct FVector                     Ground_Normal                                                    (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class UNiagaraSystem*              NS                                                               (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, SubobjectReference)
// double                             Amount_Mult                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, SubobjectReference)
// double                             Vel_Mult                                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
// double                             Size_Mult                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
// bool                               Attached                                                         (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// struct FVector                     Bone_Velocity                                                    (BlueprintReadOnly, Net, OutParm, Config, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// struct FVector                     Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UNiagaraComponent*           NS_Spawned                                                       (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             Bounce                                                           (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             Friction                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             Pebbles                                                          (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, SubobjectReference)
// double                             Thatch                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, SubobjectReference)
// double                             Grass                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Leaves                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Dust                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference)
// double                             Sand                                                             (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Size_Multiply                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetComponentVelocity_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_2                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_3                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
// int64                              CallFunc_FFloor64_ReturnValue                                    (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, EditorOnly)

float UFL_ControlRigFX_C::Spawn_Phys_Mat_VFX(class FString* Bone_Name, struct FVector* Location, double Amount_Mult, bool* Attached, struct FVector* Bone_Velocity, class UObject** __WorldContext, struct FColor* Color, double Bounce, double* Friction, double* Grass, double* Leaves, double Dust, double* Sand, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, double* CallFunc_MapRangeClamped_ReturnValue, class USoundBase* Temp_object_Variable_3, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class USoundBase** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_ControlRigFX_C", "Spawn Phys Mat VFX");

	Params::UFL_ControlRigFX_C_Spawn_Phys_Mat_VFX_Params Parms{};

	Parms.Amount_Mult = Amount_Mult;
	Parms.Bounce = Bounce;
	Parms.Dust = Dust;
	Parms.CallFunc_GetComponentVelocity_ReturnValue = CallFunc_GetComponentVelocity_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bone_Name != nullptr)
		*Bone_Name = std::move(Parms.Bone_Name);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Attached != nullptr)
		*Attached = Parms.Attached;

	if (Bone_Velocity != nullptr)
		*Bone_Velocity = std::move(Parms.Bone_Velocity);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Grass != nullptr)
		*Grass = Parms.Grass;

	if (Leaves != nullptr)
		*Leaves = Parms.Leaves;

	if (Sand != nullptr)
		*Sand = Parms.Sand;

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_GetDataTableRowFromName_OutRow_1 != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow_1 = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow_1);

	if (CallFunc_GetDataTableRowFromName_ReturnValue_1 != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue_1 = Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        CustomTag                                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FHitResult                  HitResult                                                        (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class APrimalCharacter*            PrimalCharacter                                                  (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FVector                     BoneVelocity                                                     (ExportObject, BlueprintReadOnly, Net, OutParm, Config, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               bContainsDeath                                                   (ConstParm, Net, OutParm, Config, SubobjectReference)
// class UPhysicalMaterial*           Phys_Material                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, SubobjectReference)
// struct FVector                     Normal                                                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FVector                     Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class APrimalCharacter*            Character                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// class FString                      bone                                                             (Edit, Net, Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_GetLastRenderTimeNoShadow_ReturnValue                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintReadOnly, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
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
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, SubobjectReference)
// struct FStruct_VFX_Body_Drop       CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

float UFL_ControlRigFX_C::ControlRigNotify(class FName NotifyName, struct FVector* BoneVelocity, class UObject** __WorldContext, bool* bContainsDeath, struct FVector* Normal, struct FVector* Location, struct FVector* CallFunc_GetSocketLocation_ReturnValue, double* CallFunc_GetLastRenderTimeNoShadow_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue_1, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FStruct_VFX_Body_Drop* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_ControlRigFX_C", "ControlRigNotify");

	Params::UFL_ControlRigFX_C_ControlRigNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (BoneVelocity != nullptr)
		*BoneVelocity = std::move(Parms.BoneVelocity);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (bContainsDeath != nullptr)
		*bContainsDeath = Parms.bContainsDeath;

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (CallFunc_GetSocketLocation_ReturnValue != nullptr)
		*CallFunc_GetSocketLocation_ReturnValue = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue);

	if (CallFunc_GetLastRenderTimeNoShadow_ReturnValue != nullptr)
		*CallFunc_GetLastRenderTimeNoShadow_ReturnValue = Parms.CallFunc_GetLastRenderTimeNoShadow_ReturnValue;

	if (CallFunc_GetTimeSeconds_ReturnValue != nullptr)
		*CallFunc_GetTimeSeconds_ReturnValue = Parms.CallFunc_GetTimeSeconds_ReturnValue;

	if (CallFunc_GetTimeSeconds_ReturnValue_1 != nullptr)
		*CallFunc_GetTimeSeconds_ReturnValue_1 = Parms.CallFunc_GetTimeSeconds_ReturnValue_1;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_GetDisplayName_ReturnValue != nullptr)
		*CallFunc_GetDisplayName_ReturnValue = std::move(Parms.CallFunc_GetDisplayName_ReturnValue);

	if (CallFunc_Split_LeftS != nullptr)
		*CallFunc_Split_LeftS = std::move(Parms.CallFunc_Split_LeftS);

	if (CallFunc_Split_RightS != nullptr)
		*CallFunc_Split_RightS = std::move(Parms.CallFunc_Split_RightS);

	if (CallFunc_Split_ReturnValue != nullptr)
		*CallFunc_Split_ReturnValue = Parms.CallFunc_Split_ReturnValue;

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

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


