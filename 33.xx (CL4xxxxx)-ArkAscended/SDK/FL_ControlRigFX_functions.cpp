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
// class FString                      Bone_Name                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, SubobjectReference)
// class APrimalCharacter*            Creature                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class UPhysicalMaterial*           Phys_Material                                                    (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Ground_Normal                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class UNiagaraSystem*              NS                                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Amount_Mult                                                      (Parm, DisableEditOnInstance, SubobjectReference)
// double                             Vel_Mult                                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Size_Mult                                                        (Edit, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Attached                                                         (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Bone_Velocity                                                    (EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Velocity                                                         (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class UNiagaraComponent*           NS_Spawned                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             Friction                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Pebbles                                                          (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Thatch                                                           (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Grass                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Leaves                                                           (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Dust                                                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference)
// double                             Sand                                                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Size_Multiply                                                    (Edit, ConstParm, ExportObject, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ConstParm, ExportObject, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetComponentVelocity_ReturnValue                        (BlueprintVisible, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class USoundBase*                  Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_2                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class USoundBase*                  Temp_object_Variable_3                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int64                              CallFunc_FFloor64_ReturnValue                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class USoundBase*                  K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)

double UFL_ControlRigFX_C::Spawn_Phys_Mat_VFX(class FString* Bone_Name, struct FVector* Location, double Amount_Mult, struct FVector* Bone_Velocity, class UObject** __WorldContext, struct FColor* Color, double Bounce, double* Friction, double Grass, double* Leaves, double* Sand, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1, struct FVector* CallFunc_GetComponentVelocity_ReturnValue, class USoundBase** Temp_object_Variable, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, class USoundBase** Temp_object_Variable_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class USoundBase** Temp_object_Variable_2, double* CallFunc_MapRangeClamped_ReturnValue, class USoundBase** Temp_object_Variable_3, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32* Temp_int_Variable, class USoundBase** K2Node_Select_Default, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_ControlRigFX_C", "Spawn Phys Mat VFX");

	Params::UFL_ControlRigFX_C_Spawn_Phys_Mat_VFX_Params Parms{};

	Parms.Amount_Mult = Amount_Mult;
	Parms.Bounce = Bounce;
	Parms.Grass = Grass;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = CallFunc_SetVariableFloat_InValue_ImplicitCast_2;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = CallFunc_SetVariableFloat_InValue_ImplicitCast_3;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = CallFunc_SetVariableFloat_InValue_ImplicitCast_4;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = CallFunc_SetVariableFloat_InValue_ImplicitCast_5;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = CallFunc_SetVariableFloat_InValue_ImplicitCast_6;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = CallFunc_SetVariableFloat_InValue_ImplicitCast_7;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = CallFunc_SetVariableFloat_InValue_ImplicitCast_8;

	UObject::ProcessEvent(Func, &Parms);

	if (Bone_Name != nullptr)
		*Bone_Name = std::move(Parms.Bone_Name);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Bone_Velocity != nullptr)
		*Bone_Velocity = std::move(Parms.Bone_Velocity);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Leaves != nullptr)
		*Leaves = Parms.Leaves;

	if (Sand != nullptr)
		*Sand = Parms.Sand;

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_SpawnSystemAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAtLocation_ReturnValue = Parms.CallFunc_SpawnSystemAtLocation_ReturnValue;

	if (CallFunc_GetDataTableRowFromName_OutRow_1 != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow_1 = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow_1);

	if (CallFunc_GetDataTableRowFromName_ReturnValue_1 != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue_1 = Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1;

	if (CallFunc_GetComponentVelocity_ReturnValue != nullptr)
		*CallFunc_GetComponentVelocity_ReturnValue = std::move(Parms.CallFunc_GetComponentVelocity_ReturnValue);

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (Temp_object_Variable_1 != nullptr)
		*Temp_object_Variable_1 = Parms.Temp_object_Variable_1;

	if (Temp_object_Variable_2 != nullptr)
		*Temp_object_Variable_2 = Parms.Temp_object_Variable_2;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (Temp_object_Variable_3 != nullptr)
		*Temp_object_Variable_3 = Parms.Temp_object_Variable_3;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        CustomTag                                                        (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
// class APrimalCharacter*            PrimalCharacter                                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig)
// struct FVector                     BoneVelocity                                                     (ExportObject, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bContainsDeath                                                   (ConstParm, BlueprintReadOnly, Net, OutParm, Transient, EditConst, SubobjectReference)
// class UPhysicalMaterial*           Phys_Material                                                    (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     Normal                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
// struct FVector                     Velocity                                                         (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class APrimalCharacter*            Character                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig)
// class FString                      bone                                                             (Edit, Net, Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_GetLastRenderTimeNoShadow_ReturnValue                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, Net, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
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
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FStruct_VFX_Body_Drop       CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)

class FName UFL_ControlRigFX_C::ControlRigNotify(class FName NotifyName, const struct FHitResult& HitResult, class APrimalCharacter** PrimalCharacter, struct FVector* BoneVelocity, class UObject** __WorldContext, bool* bContainsDeath, struct FVector* Location, class APrimalCharacter** Character, struct FVector* CallFunc_GetSocketLocation_ReturnValue, double* CallFunc_GetLastRenderTimeNoShadow_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue_1, class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, TArray<class AActor*>* Temp_object_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FStruct_VFX_Body_Drop* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_ControlRigFX_C", "ControlRigNotify");

	Params::UFL_ControlRigFX_C_ControlRigNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.HitResult = HitResult;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (PrimalCharacter != nullptr)
		*PrimalCharacter = Parms.PrimalCharacter;

	if (BoneVelocity != nullptr)
		*BoneVelocity = std::move(Parms.BoneVelocity);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (bContainsDeath != nullptr)
		*bContainsDeath = Parms.bContainsDeath;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Character != nullptr)
		*Character = Parms.Character;

	if (CallFunc_GetSocketLocation_ReturnValue != nullptr)
		*CallFunc_GetSocketLocation_ReturnValue = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue);

	if (CallFunc_GetLastRenderTimeNoShadow_ReturnValue != nullptr)
		*CallFunc_GetLastRenderTimeNoShadow_ReturnValue = Parms.CallFunc_GetLastRenderTimeNoShadow_ReturnValue;

	if (CallFunc_GetTimeSeconds_ReturnValue != nullptr)
		*CallFunc_GetTimeSeconds_ReturnValue = Parms.CallFunc_GetTimeSeconds_ReturnValue;

	if (CallFunc_GetTimeSeconds_ReturnValue_1 != nullptr)
		*CallFunc_GetTimeSeconds_ReturnValue_1 = Parms.CallFunc_GetTimeSeconds_ReturnValue_1;

	if (CallFunc_GetDisplayName_ReturnValue != nullptr)
		*CallFunc_GetDisplayName_ReturnValue = std::move(Parms.CallFunc_GetDisplayName_ReturnValue);

	if (CallFunc_Split_LeftS != nullptr)
		*CallFunc_Split_LeftS = std::move(Parms.CallFunc_Split_LeftS);

	if (CallFunc_Split_RightS != nullptr)
		*CallFunc_Split_RightS = std::move(Parms.CallFunc_Split_RightS);

	if (CallFunc_Split_ReturnValue != nullptr)
		*CallFunc_Split_ReturnValue = Parms.CallFunc_Split_ReturnValue;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = std::move(Parms.Temp_object_Variable);

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

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


