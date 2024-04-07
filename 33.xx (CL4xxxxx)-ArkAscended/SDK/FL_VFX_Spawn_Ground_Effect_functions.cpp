#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_VFX_Spawn_Ground_Effect.FL_VFX_Spawn_Ground_Effect_C
// (None)

class UClass* UFL_VFX_Spawn_Ground_Effect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_VFX_Spawn_Ground_Effect_C");

	return Clss;
}


// FL_VFX_Spawn_Ground_Effect_C FL_VFX_Spawn_Ground_Effect.Default__FL_VFX_Spawn_Ground_Effect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_VFX_Spawn_Ground_Effect_C* UFL_VFX_Spawn_Ground_Effect_C::GetDefaultObj()
{
	static class UFL_VFX_Spawn_Ground_Effect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_VFX_Spawn_Ground_Effect_C*>(UFL_VFX_Spawn_Ground_Effect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_VFX_Spawn_Ground_Effect.FL_VFX_Spawn_Ground_Effect_C.Set Ground VFX Parameters
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           Niagara_Component                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Trace_Start_Offset                                               (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Trace_End_Offset                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Size_Mult                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Amount_Mult                                                      (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Velocity_Mult                                                    (Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Velocity                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Amount                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Size                                                        (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Thatch                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Sand                                                             (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Pebbles                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Leaves                                                           (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Init_Velocity                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Impact_Mult                                                      (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Grass                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Friction                                                         (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Dust                                                             (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_Find_Ground_Attributes_Color                            (Edit, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_SandAmount                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_DustAmount                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_LeavesDebrisAmount               (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_GrassDebrisAmount                (Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_ThatchDebrisAmount               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_PebblesDebrisAmount              (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_Friction                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_Bounce                           (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_9                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_10                (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector UFL_VFX_Spawn_Ground_Effect_C::Set_Ground_VFX_Parameters(class UNiagaraComponent** Niagara_Component, struct FVector* Location, double* Size_Mult, class UObject* __WorldContext, double* Mult_Velocity, double* Mult_Amount, double* Mult_Size, double* Thatch, double Sand, double* Pebbles, double Leaves, struct FVector* Init_Velocity, double* Impact_Mult, double Grass, double* Friction, struct FColor* Color, double* Bounce, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, struct FColor* CallFunc_Find_Ground_Attributes_Color, double* CallFunc_Find_Ground_Attributes_SandAmount, double* CallFunc_Find_Ground_Attributes_DustAmount, double* CallFunc_Find_Ground_Attributes_LeavesDebrisAmount, double* CallFunc_Find_Ground_Attributes_GrassDebrisAmount, double* CallFunc_Find_Ground_Attributes_ThatchDebrisAmount, double* CallFunc_Find_Ground_Attributes_PebblesDebrisAmount, double* CallFunc_Find_Ground_Attributes_Friction, double* CallFunc_Find_Ground_Attributes_Bounce, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_10, double* CallFunc_MakeVector_X_ImplicitCast, double* CallFunc_MakeVector_Y_ImplicitCast, double* CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_VFX_Spawn_Ground_Effect_C", "Set Ground VFX Parameters");

	Params::UFL_VFX_Spawn_Ground_Effect_C_Set_Ground_VFX_Parameters_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Sand = Sand;
	Parms.Leaves = Leaves;
	Parms.Grass = Grass;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Niagara_Component != nullptr)
		*Niagara_Component = Parms.Niagara_Component;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Size_Mult != nullptr)
		*Size_Mult = Parms.Size_Mult;

	if (Mult_Velocity != nullptr)
		*Mult_Velocity = Parms.Mult_Velocity;

	if (Mult_Amount != nullptr)
		*Mult_Amount = Parms.Mult_Amount;

	if (Mult_Size != nullptr)
		*Mult_Size = Parms.Mult_Size;

	if (Thatch != nullptr)
		*Thatch = Parms.Thatch;

	if (Pebbles != nullptr)
		*Pebbles = Parms.Pebbles;

	if (Init_Velocity != nullptr)
		*Init_Velocity = std::move(Parms.Init_Velocity);

	if (Impact_Mult != nullptr)
		*Impact_Mult = Parms.Impact_Mult;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	if (CallFunc_Find_Ground_Attributes_Color != nullptr)
		*CallFunc_Find_Ground_Attributes_Color = std::move(Parms.CallFunc_Find_Ground_Attributes_Color);

	if (CallFunc_Find_Ground_Attributes_SandAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_SandAmount = Parms.CallFunc_Find_Ground_Attributes_SandAmount;

	if (CallFunc_Find_Ground_Attributes_DustAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_DustAmount = Parms.CallFunc_Find_Ground_Attributes_DustAmount;

	if (CallFunc_Find_Ground_Attributes_LeavesDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_LeavesDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_LeavesDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_GrassDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_GrassDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_GrassDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_ThatchDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_ThatchDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_ThatchDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_PebblesDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_PebblesDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_PebblesDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_Friction != nullptr)
		*CallFunc_Find_Ground_Attributes_Friction = Parms.CallFunc_Find_Ground_Attributes_Friction;

	if (CallFunc_Find_Ground_Attributes_Bounce != nullptr)
		*CallFunc_Find_Ground_Attributes_Bounce = Parms.CallFunc_Find_Ground_Attributes_Bounce;

	if (CallFunc_MakeVector_ReturnValue != nullptr)
		*CallFunc_MakeVector_ReturnValue = std::move(Parms.CallFunc_MakeVector_ReturnValue);

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_2 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_3 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_4 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_5 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_6 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_7 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_8 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_9 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_9 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_9;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_10 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_10 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_10;

	if (CallFunc_MakeVector_X_ImplicitCast != nullptr)
		*CallFunc_MakeVector_X_ImplicitCast = Parms.CallFunc_MakeVector_X_ImplicitCast;

	if (CallFunc_MakeVector_Y_ImplicitCast != nullptr)
		*CallFunc_MakeVector_Y_ImplicitCast = Parms.CallFunc_MakeVector_Y_ImplicitCast;

	if (CallFunc_MakeVector_Z_ImplicitCast != nullptr)
		*CallFunc_MakeVector_Z_ImplicitCast = Parms.CallFunc_MakeVector_Z_ImplicitCast;

	return Parms.ReturnValue;

}


// Function FL_VFX_Spawn_Ground_Effect.FL_VFX_Spawn_Ground_Effect_C.Set Cart Track VFX Parameters
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*           Wheel_Phys_Material                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Wheel_Hit_Position                                               (EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Wheel_Ground_Normal                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           Niagara_System                                                   (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Render_Index                                                     (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Thatch                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Sand                                                             (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Pebbles                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Leaves                                                           (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Grass                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Friction                                                         (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Dust                                                             (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Fade_Off_Time                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue                             (BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector UFL_VFX_Spawn_Ground_Effect_C::Set_Cart_Track_VFX_Parameters(class UNiagaraComponent** Niagara_System, class UObject* __WorldContext, int32* Render_Index, double* Thatch, double Sand, double* Pebbles, double Leaves, double Grass, double* Friction, struct FColor* Color, double* Bounce, double Fade_Off_Time, const struct FVector& CallFunc_ClampVectorSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_VFX_Spawn_Ground_Effect_C", "Set Cart Track VFX Parameters");

	Params::UFL_VFX_Spawn_Ground_Effect_C_Set_Cart_Track_VFX_Parameters_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Sand = Sand;
	Parms.Leaves = Leaves;
	Parms.Grass = Grass;
	Parms.Fade_Off_Time = Fade_Off_Time;
	Parms.CallFunc_ClampVectorSize_ReturnValue = CallFunc_ClampVectorSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Niagara_System != nullptr)
		*Niagara_System = Parms.Niagara_System;

	if (Render_Index != nullptr)
		*Render_Index = Parms.Render_Index;

	if (Thatch != nullptr)
		*Thatch = Parms.Thatch;

	if (Pebbles != nullptr)
		*Pebbles = Parms.Pebbles;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	return Parms.ReturnValue;

}


// Function FL_VFX_Spawn_Ground_Effect.FL_VFX_Spawn_Ground_Effect_C.Find Ground Attributes
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InObj                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             SandAmount                                                       (ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             DustAmount                                                       (Edit, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             LeavesDebrisAmount                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             GrassDebrisAmount                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ThatchDebrisAmount                                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             PebblesDebrisAmount                                              (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Friction                                                         (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue                         (Edit, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)

class UObject* UFL_VFX_Spawn_Ground_Effect_C::Find_Ground_Attributes(class UObject* __WorldContext, struct FColor* Color, double* SandAmount, double DustAmount, double* LeavesDebrisAmount, double GrassDebrisAmount, double* ThatchDebrisAmount, double* PebblesDebrisAmount, double* Friction, double* Bounce, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FString* CallFunc_Conv_ObjectToString_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_VFX_Spawn_Ground_Effect_C", "Find Ground Attributes");

	Params::UFL_VFX_Spawn_Ground_Effect_C_Find_Ground_Attributes_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.DustAmount = DustAmount;
	Parms.GrassDebrisAmount = GrassDebrisAmount;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (SandAmount != nullptr)
		*SandAmount = Parms.SandAmount;

	if (LeavesDebrisAmount != nullptr)
		*LeavesDebrisAmount = Parms.LeavesDebrisAmount;

	if (ThatchDebrisAmount != nullptr)
		*ThatchDebrisAmount = Parms.ThatchDebrisAmount;

	if (PebblesDebrisAmount != nullptr)
		*PebblesDebrisAmount = Parms.PebblesDebrisAmount;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	if (CallFunc_Conv_ObjectToString_ReturnValue != nullptr)
		*CallFunc_Conv_ObjectToString_ReturnValue = std::move(Parms.CallFunc_Conv_ObjectToString_ReturnValue);

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	return Parms.ReturnValue;

}


// Function FL_VFX_Spawn_Ground_Effect.FL_VFX_Spawn_Ground_Effect_C.Spawn Ground VFX Attached
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              NS                                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Trace_Offset                                                     (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Size_Mult                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Amount_Mult                                                      (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Velocity_Mult                                                    (Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NS_Rotate                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      Attached_Bone_Name                                               (ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USkeletalMeshComponent*      Attached_Skeletal_Mesh                                           (ConstParm, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Velocity                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Amount                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Size                                                        (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           Niagara_Component                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Thatch                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Sand                                                             (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Pebbles                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Leaves                                                           (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Init_Velocity                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Impact_Mult                                                      (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Grass                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Friction                                                         (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Dust                                                             (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetBoneLinearVelocity_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_Find_Ground_Attributes_Color                            (Edit, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_SandAmount                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_DustAmount                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_LeavesDebrisAmount               (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_GrassDebrisAmount                (Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_ThatchDebrisAmount               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_PebblesDebrisAmount              (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_Friction                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_Bounce                           (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotFromYX_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_9                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_10                (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector UFL_VFX_Spawn_Ground_Effect_C::Spawn_Ground_VFX_Attached(class UNiagaraSystem** NS, struct FVector* Location, double* Size_Mult, struct FRotator* NS_Rotate, const class FString& Attached_Bone_Name, class USkeletalMeshComponent* Attached_Skeletal_Mesh, class UObject* __WorldContext, double* Mult_Velocity, double* Mult_Amount, double* Mult_Size, class UNiagaraComponent** Niagara_Component, double* Thatch, double Sand, double* Pebbles, double Leaves, struct FVector* Init_Velocity, double* Impact_Mult, double Grass, double* Friction, struct FColor* Color, double* Bounce, class FName* CallFunc_Conv_StringToName_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue_1, struct FVector* CallFunc_GetBoneLinearVelocity_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, struct FColor* CallFunc_Find_Ground_Attributes_Color, double* CallFunc_Find_Ground_Attributes_SandAmount, double* CallFunc_Find_Ground_Attributes_DustAmount, double* CallFunc_Find_Ground_Attributes_LeavesDebrisAmount, double* CallFunc_Find_Ground_Attributes_GrassDebrisAmount, double* CallFunc_Find_Ground_Attributes_ThatchDebrisAmount, double* CallFunc_Find_Ground_Attributes_PebblesDebrisAmount, double* CallFunc_Find_Ground_Attributes_Friction, double* CallFunc_Find_Ground_Attributes_Bounce, const struct FRotator& CallFunc_MakeRotFromYX_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_10, double* CallFunc_MakeVector_X_ImplicitCast, double* CallFunc_MakeVector_Y_ImplicitCast, double* CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_VFX_Spawn_Ground_Effect_C", "Spawn Ground VFX Attached");

	Params::UFL_VFX_Spawn_Ground_Effect_C_Spawn_Ground_VFX_Attached_Params Parms{};

	Parms.Attached_Bone_Name = Attached_Bone_Name;
	Parms.Attached_Skeletal_Mesh = Attached_Skeletal_Mesh;
	Parms.__WorldContext = __WorldContext;
	Parms.Sand = Sand;
	Parms.Leaves = Leaves;
	Parms.Grass = Grass;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_MakeRotFromYX_ReturnValue = CallFunc_MakeRotFromYX_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NS != nullptr)
		*NS = Parms.NS;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Size_Mult != nullptr)
		*Size_Mult = Parms.Size_Mult;

	if (NS_Rotate != nullptr)
		*NS_Rotate = std::move(Parms.NS_Rotate);

	if (Mult_Velocity != nullptr)
		*Mult_Velocity = Parms.Mult_Velocity;

	if (Mult_Amount != nullptr)
		*Mult_Amount = Parms.Mult_Amount;

	if (Mult_Size != nullptr)
		*Mult_Size = Parms.Mult_Size;

	if (Niagara_Component != nullptr)
		*Niagara_Component = Parms.Niagara_Component;

	if (Thatch != nullptr)
		*Thatch = Parms.Thatch;

	if (Pebbles != nullptr)
		*Pebbles = Parms.Pebbles;

	if (Init_Velocity != nullptr)
		*Init_Velocity = std::move(Parms.Init_Velocity);

	if (Impact_Mult != nullptr)
		*Impact_Mult = Parms.Impact_Mult;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	if (CallFunc_Conv_StringToName_ReturnValue != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue = Parms.CallFunc_Conv_StringToName_ReturnValue;

	if (CallFunc_Conv_StringToName_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue_1 = Parms.CallFunc_Conv_StringToName_ReturnValue_1;

	if (CallFunc_GetBoneLinearVelocity_ReturnValue != nullptr)
		*CallFunc_GetBoneLinearVelocity_ReturnValue = std::move(Parms.CallFunc_GetBoneLinearVelocity_ReturnValue);

	if (CallFunc_Conv_StringToName_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToName_ReturnValue_2 = Parms.CallFunc_Conv_StringToName_ReturnValue_2;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	if (CallFunc_Find_Ground_Attributes_Color != nullptr)
		*CallFunc_Find_Ground_Attributes_Color = std::move(Parms.CallFunc_Find_Ground_Attributes_Color);

	if (CallFunc_Find_Ground_Attributes_SandAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_SandAmount = Parms.CallFunc_Find_Ground_Attributes_SandAmount;

	if (CallFunc_Find_Ground_Attributes_DustAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_DustAmount = Parms.CallFunc_Find_Ground_Attributes_DustAmount;

	if (CallFunc_Find_Ground_Attributes_LeavesDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_LeavesDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_LeavesDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_GrassDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_GrassDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_GrassDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_ThatchDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_ThatchDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_ThatchDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_PebblesDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_PebblesDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_PebblesDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_Friction != nullptr)
		*CallFunc_Find_Ground_Attributes_Friction = Parms.CallFunc_Find_Ground_Attributes_Friction;

	if (CallFunc_Find_Ground_Attributes_Bounce != nullptr)
		*CallFunc_Find_Ground_Attributes_Bounce = Parms.CallFunc_Find_Ground_Attributes_Bounce;

	if (CallFunc_SpawnSystemAttached_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAttached_ReturnValue = Parms.CallFunc_SpawnSystemAttached_ReturnValue;

	if (CallFunc_MakeVector_ReturnValue != nullptr)
		*CallFunc_MakeVector_ReturnValue = std::move(Parms.CallFunc_MakeVector_ReturnValue);

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_2 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_3 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_4 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_5 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_6 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_7 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_8 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_9 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_9 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_9;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_10 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_10 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_10;

	if (CallFunc_MakeVector_X_ImplicitCast != nullptr)
		*CallFunc_MakeVector_X_ImplicitCast = Parms.CallFunc_MakeVector_X_ImplicitCast;

	if (CallFunc_MakeVector_Y_ImplicitCast != nullptr)
		*CallFunc_MakeVector_Y_ImplicitCast = Parms.CallFunc_MakeVector_Y_ImplicitCast;

	if (CallFunc_MakeVector_Z_ImplicitCast != nullptr)
		*CallFunc_MakeVector_Z_ImplicitCast = Parms.CallFunc_MakeVector_Z_ImplicitCast;

	return Parms.ReturnValue;

}


// Function FL_VFX_Spawn_Ground_Effect.FL_VFX_Spawn_Ground_Effect_C.Spawn Ground VFX
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              NS                                                               (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector                     Trace_Offset                                                     (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Size_Mult                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Amount_Mult                                                      (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Velocity_Mult                                                    (Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    NS_Rotate                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     __WorldContext                                                   (BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Velocity                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Amount                                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Mult_Size                                                        (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           Niagara_Component                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Thatch                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Sand                                                             (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Pebbles                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Leaves                                                           (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Init_Velocity                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Impact_Mult                                                      (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Grass                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Friction                                                         (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Dust                                                             (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// double                             Bounce                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_Find_Ground_Attributes_Color                            (Edit, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_SandAmount                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_DustAmount                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_LeavesDebrisAmount               (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_GrassDebrisAmount                (Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_ThatchDebrisAmount               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_PebblesDebrisAmount              (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_Friction                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Find_Ground_Attributes_Bounce                           (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_9                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_10                (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector UFL_VFX_Spawn_Ground_Effect_C::Spawn_Ground_VFX(class UNiagaraSystem** NS, struct FVector* Location, double* Size_Mult, struct FRotator* NS_Rotate, class UObject* __WorldContext, double* Mult_Velocity, double* Mult_Amount, double* Mult_Size, class UNiagaraComponent** Niagara_Component, double* Thatch, double Sand, double* Pebbles, double Leaves, struct FVector* Init_Velocity, double* Impact_Mult, double Grass, double* Friction, struct FColor* Color, double* Bounce, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue, struct FColor* CallFunc_Find_Ground_Attributes_Color, double* CallFunc_Find_Ground_Attributes_SandAmount, double* CallFunc_Find_Ground_Attributes_DustAmount, double* CallFunc_Find_Ground_Attributes_LeavesDebrisAmount, double* CallFunc_Find_Ground_Attributes_GrassDebrisAmount, double* CallFunc_Find_Ground_Attributes_ThatchDebrisAmount, double* CallFunc_Find_Ground_Attributes_PebblesDebrisAmount, double* CallFunc_Find_Ground_Attributes_Friction, double* CallFunc_Find_Ground_Attributes_Bounce, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_10, double* CallFunc_MakeVector_X_ImplicitCast, double* CallFunc_MakeVector_Y_ImplicitCast, double* CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_VFX_Spawn_Ground_Effect_C", "Spawn Ground VFX");

	Params::UFL_VFX_Spawn_Ground_Effect_C_Spawn_Ground_VFX_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Sand = Sand;
	Parms.Leaves = Leaves;
	Parms.Grass = Grass;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NS != nullptr)
		*NS = Parms.NS;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Size_Mult != nullptr)
		*Size_Mult = Parms.Size_Mult;

	if (NS_Rotate != nullptr)
		*NS_Rotate = std::move(Parms.NS_Rotate);

	if (Mult_Velocity != nullptr)
		*Mult_Velocity = Parms.Mult_Velocity;

	if (Mult_Amount != nullptr)
		*Mult_Amount = Parms.Mult_Amount;

	if (Mult_Size != nullptr)
		*Mult_Size = Parms.Mult_Size;

	if (Niagara_Component != nullptr)
		*Niagara_Component = Parms.Niagara_Component;

	if (Thatch != nullptr)
		*Thatch = Parms.Thatch;

	if (Pebbles != nullptr)
		*Pebbles = Parms.Pebbles;

	if (Init_Velocity != nullptr)
		*Init_Velocity = std::move(Parms.Init_Velocity);

	if (Impact_Mult != nullptr)
		*Impact_Mult = Parms.Impact_Mult;

	if (Friction != nullptr)
		*Friction = Parms.Friction;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Bounce != nullptr)
		*Bounce = Parms.Bounce;

	if (CallFunc_MakeVector_ReturnValue != nullptr)
		*CallFunc_MakeVector_ReturnValue = std::move(Parms.CallFunc_MakeVector_ReturnValue);

	if (CallFunc_Find_Ground_Attributes_Color != nullptr)
		*CallFunc_Find_Ground_Attributes_Color = std::move(Parms.CallFunc_Find_Ground_Attributes_Color);

	if (CallFunc_Find_Ground_Attributes_SandAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_SandAmount = Parms.CallFunc_Find_Ground_Attributes_SandAmount;

	if (CallFunc_Find_Ground_Attributes_DustAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_DustAmount = Parms.CallFunc_Find_Ground_Attributes_DustAmount;

	if (CallFunc_Find_Ground_Attributes_LeavesDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_LeavesDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_LeavesDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_GrassDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_GrassDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_GrassDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_ThatchDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_ThatchDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_ThatchDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_PebblesDebrisAmount != nullptr)
		*CallFunc_Find_Ground_Attributes_PebblesDebrisAmount = Parms.CallFunc_Find_Ground_Attributes_PebblesDebrisAmount;

	if (CallFunc_Find_Ground_Attributes_Friction != nullptr)
		*CallFunc_Find_Ground_Attributes_Friction = Parms.CallFunc_Find_Ground_Attributes_Friction;

	if (CallFunc_Find_Ground_Attributes_Bounce != nullptr)
		*CallFunc_Find_Ground_Attributes_Bounce = Parms.CallFunc_Find_Ground_Attributes_Bounce;

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_SpawnSystemAtLocation_ReturnValue != nullptr)
		*CallFunc_SpawnSystemAtLocation_ReturnValue = Parms.CallFunc_SpawnSystemAtLocation_ReturnValue;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_2 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_3 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_4 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_5 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_6 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_7 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_8 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_9 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_9 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_9;

	if (CallFunc_SetVariableFloat_InValue_ImplicitCast_10 != nullptr)
		*CallFunc_SetVariableFloat_InValue_ImplicitCast_10 = Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_10;

	if (CallFunc_MakeVector_X_ImplicitCast != nullptr)
		*CallFunc_MakeVector_X_ImplicitCast = Parms.CallFunc_MakeVector_X_ImplicitCast;

	if (CallFunc_MakeVector_Y_ImplicitCast != nullptr)
		*CallFunc_MakeVector_Y_ImplicitCast = Parms.CallFunc_MakeVector_Y_ImplicitCast;

	if (CallFunc_MakeVector_Z_ImplicitCast != nullptr)
		*CallFunc_MakeVector_Z_ImplicitCast = Parms.CallFunc_MakeVector_Z_ImplicitCast;

	return Parms.ReturnValue;

}

}


