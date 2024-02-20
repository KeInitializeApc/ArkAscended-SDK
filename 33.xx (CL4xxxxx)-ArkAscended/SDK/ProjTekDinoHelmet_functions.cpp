#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C
// (Actor)

class UClass* AProjTekDinoHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjTekDinoHelmet_C");

	return Clss;
}


// ProjTekDinoHelmet_C ProjTekDinoHelmet.Default__ProjTekDinoHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjTekDinoHelmet_C* AProjTekDinoHelmet_C::GetDefaultObj()
{
	static class AProjTekDinoHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjTekDinoHelmet_C*>(AProjTekDinoHelmet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.BPIgnoreRadialDamageVictim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPIsA_ReturnValue                                       (ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool AProjTekDinoHelmet_C::BPIgnoreRadialDamageVictim(bool ReturnValue, bool CallFunc_BPIsA_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "BPIgnoreRadialDamageVictim");

	Params::AProjTekDinoHelmet_C_BPIgnoreRadialDamageVictim_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_BPIsA_ReturnValue = CallFunc_BPIsA_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

	return Parms.ReturnValue;

}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjTekDinoHelmet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FHitResult AProjTekDinoHelmet_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "OnExplode");

	Params::AProjTekDinoHelmet_C_OnExplode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FHitResult                  K2Node_Event_Result                                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
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
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool AProjTekDinoHelmet_C::ExecuteUbergraph_ProjTekDinoHelmet(const struct FHitResult& K2Node_Event_Result, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APrimalStructure* K2Node_DynamicCast_AsPrimal_Structure, bool* CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "ExecuteUbergraph_ProjTekDinoHelmet");

	Params::AProjTekDinoHelmet_C_ExecuteUbergraph_ProjTekDinoHelmet_Params Parms{};

	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsPrimal_Structure = K2Node_DynamicCast_AsPrimal_Structure;

	UObject::ProcessEvent(Func, &Parms);

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

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

	return Parms.ReturnValue;

}

}


