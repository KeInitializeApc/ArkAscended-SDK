#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimapWidget_ASA.MinimapWidget_ASA_C
// (None)

class UClass* UMinimapWidget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapWidget_ASA_C");

	return Clss;
}


// MinimapWidget_ASA_C MinimapWidget_ASA.Default__MinimapWidget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapWidget_ASA_C* UMinimapWidget_ASA_C::GetDefaultObj()
{
	static class UMinimapWidget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapWidget_ASA_C*>(UMinimapWidget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.TraceGroundLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WithLocation                                                     (Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Found                                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// double                             Z                                                                (Edit, EditFixedSize, ReturnParm, Transient, Config)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_4                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

double UMinimapWidget_ASA_C::TraceGroundLocation(const struct FVector& WithLocation, bool* Found, TArray<class AActor*>* K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "TraceGroundLocation");

	Params::UMinimapWidget_ASA_C_TraceGroundLocation_Params Parms{};

	Parms.WithLocation = WithLocation;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_Location != nullptr)
		*CallFunc_BreakHitResult_Location = std::move(Parms.CallFunc_BreakHitResult_Location);

	if (CallFunc_BreakHitResult_ImpactPoint != nullptr)
		*CallFunc_BreakHitResult_ImpactPoint = std::move(Parms.CallFunc_BreakHitResult_ImpactPoint);

	if (CallFunc_BreakHitResult_Normal != nullptr)
		*CallFunc_BreakHitResult_Normal = std::move(Parms.CallFunc_BreakHitResult_Normal);

	if (CallFunc_BreakHitResult_ImpactNormal != nullptr)
		*CallFunc_BreakHitResult_ImpactNormal = std::move(Parms.CallFunc_BreakHitResult_ImpactNormal);

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

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

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Render Scale for POI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float UMinimapWidget_ASA_C::Get_Render_Scale_for_POI(bool Temp_bool_Variable, double CallFunc_FClamp_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "Get Render Scale for POI");

	Params::UMinimapWidget_ASA_C_Get_Render_Scale_for_POI_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.IncrementCacheOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Qty                                                              (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 UMinimapWidget_ASA_C::IncrementCacheOverride(int32 Qty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "IncrementCacheOverride");

	Params::UMinimapWidget_ASA_C_IncrementCacheOverride_Params Parms{};

	Parms.Qty = Qty;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateCachedData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapData                    CallFunc_Get_Current_MiniMap_Data_CurrentMinimapData             (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

bool UMinimapWidget_ASA_C::UpdateCachedData(struct FMapData* CallFunc_Get_Current_MiniMap_Data_CurrentMinimapData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "UpdateCachedData");

	Params::UMinimapWidget_ASA_C_UpdateCachedData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Get_Current_MiniMap_Data_CurrentMinimapData != nullptr)
		*CallFunc_Get_Current_MiniMap_Data_CurrentMinimapData = std::move(Parms.CallFunc_Get_Current_MiniMap_Data_CurrentMinimapData);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetLocationWIthCoords
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Coords                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)

double UMinimapWidget_ASA_C::GetLocationWIthCoords(struct FVector2D* Coords, struct FVector* Location, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "GetLocationWIthCoords");

	Params::UMinimapWidget_ASA_C_GetLocationWIthCoords_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Coords != nullptr)
		*Coords = std::move(Parms.Coords);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.CalculateWorldLocationMinimap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Vector                                                           (Edit, BlueprintVisible, Net, OutParm)
// struct FVector                     Loc                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)

float UMinimapWidget_ASA_C::CalculateWorldLocationMinimap(struct FVector2D* Vector, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "CalculateWorldLocationMinimap");

	Params::UMinimapWidget_ASA_C_CalculateWorldLocationMinimap_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetAllPois
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPointOfInterestData>MarkPOIs                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FPointOfInterestData_ForCompanion>Local_nearby_POI                                                 (Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               HasTrackingAPoi                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      MapName                                                          (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FPointOfInterestData>LocalPointOfinterest                                             (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FPointOfInterestData_ForCompanionCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FPointOfInterestData        K2Node_MakeStruct_PointOfInterestData                            (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_2                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_3                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<struct FPointOfInterestData_ForCompanion>CallFunc_GetNearbyPOIs_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_4                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FMinimapMark                CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FPointOfInterestData        K2Node_MakeStruct_PointOfInterestData_1                          (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

int32 UMinimapWidget_ASA_C::GetAllPois(TArray<struct FPointOfInterestData_ForCompanion>* Local_nearby_POI, bool HasTrackingAPoi, const TArray<struct FPointOfInterestData>& LocalPointOfinterest, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, const struct FPointOfInterestData_ForCompanion& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_4, const struct FMinimapMark& CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "GetAllPois");

	Params::UMinimapWidget_ASA_C_GetAllPois_Params Parms{};

	Parms.HasTrackingAPoi = HasTrackingAPoi;
	Parms.LocalPointOfinterest = LocalPointOfinterest;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_2 = CallFunc_GetShooterGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_3 = CallFunc_GetShooterGameUserSettings_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_4 = CallFunc_GetShooterGameUserSettings_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Local_nearby_POI != nullptr)
		*Local_nearby_POI = std::move(Parms.Local_nearby_POI);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_BPGetPrimaryMapName_ReturnValue != nullptr)
		*CallFunc_BPGetPrimaryMapName_ReturnValue = std::move(Parms.CallFunc_BPGetPrimaryMapName_ReturnValue);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.LocAndRotYourself
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InPosition                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (Edit, Net, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

float UMinimapWidget_ASA_C::LocAndRotYourself(struct FVector2D* InPosition, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "LocAndRotYourself");

	Params::UMinimapWidget_ASA_C_LocAndRotYourself_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InPosition != nullptr)
		*InPosition = std::move(Parms.InPosition);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateOwnPlayerMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Vector_Zero_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetPawnLoc_WorldLocation                                (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool UMinimapWidget_ASA_C::UpdateOwnPlayerMark(struct FVector* CallFunc_Vector_Zero_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetPawnLoc_WorldLocation, bool* CallFunc_EqualEqual_VectorVector_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "UpdateOwnPlayerMark");

	Params::UMinimapWidget_ASA_C_UpdateOwnPlayerMark_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPawnLoc_WorldLocation = CallFunc_GetPawnLoc_WorldLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Vector_Zero_ReturnValue != nullptr)
		*CallFunc_Vector_Zero_ReturnValue = std::move(Parms.CallFunc_Vector_Zero_ReturnValue);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_VectorVector_ReturnValue != nullptr)
		*CallFunc_EqualEqual_VectorVector_ReturnValue = Parms.CallFunc_EqualEqual_VectorVector_ReturnValue;

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.GeneratePOIs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MapName                                                          (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FName>                TagsUsed                                                         (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UMapMarkWidget_ASA_C*        CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_Get_Render_Scale_for_POI_ReturnValue                    (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FPointOfInterestData        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FMinimapMark                K2Node_MakeStruct_MinimapMark                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UMapMarkWidget_ASA_C*        CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UMapMarkWidget_ASA_C*        CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue_1                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords_1                             (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// TArray<struct FPointOfInterestData>CallFunc_GetAllPois_MarkPOIs                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_SetProgressPercent_Percent_ImplicitCast                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SetProgressPercent_Percent_ImplicitCast_1               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)

int32 UMinimapWidget_ASA_C::GeneratePOIs(const TArray<class FName>& TagsUsed, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, class UMapMarkWidget_ASA_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FPointOfInterestData& CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FMinimapMark* K2Node_MakeStruct_MinimapMark, int32* CallFunc_Array_LastIndex_ReturnValue, class UMapMarkWidget_ASA_C* CallFunc_Array_Get_Item_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMapMarkWidget_ASA_C* CallFunc_Array_Get_Item_2, bool* CallFunc_Array_IsValidIndex_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue_1, struct FVector2D* CallFunc_GetMinimapLocation_Coords_1, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, const TArray<struct FPointOfInterestData>& CallFunc_GetAllPois_MarkPOIs, class UPanelSlot** CallFunc_AddChild_ReturnValue, double CallFunc_SetProgressPercent_Percent_ImplicitCast, double CallFunc_SetProgressPercent_Percent_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "GeneratePOIs");

	Params::UMinimapWidget_ASA_C_GeneratePOIs_Params Parms{};

	Parms.TagsUsed = TagsUsed;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetAllPois_MarkPOIs = CallFunc_GetAllPois_MarkPOIs;
	Parms.CallFunc_SetProgressPercent_Percent_ImplicitCast = CallFunc_SetProgressPercent_Percent_ImplicitCast;
	Parms.CallFunc_SetProgressPercent_Percent_ImplicitCast_1 = CallFunc_SetProgressPercent_Percent_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetPrimaryMapName_ReturnValue != nullptr)
		*CallFunc_BPGetPrimaryMapName_ReturnValue = std::move(Parms.CallFunc_BPGetPrimaryMapName_ReturnValue);

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_MakeStruct_MinimapMark != nullptr)
		*K2Node_MakeStruct_MinimapMark = std::move(Parms.K2Node_MakeStruct_MinimapMark);

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	if (CallFunc_GetMinimapLocation_ReturnValue_1 != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue_1 = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue_1);

	if (CallFunc_GetMinimapLocation_Coords_1 != nullptr)
		*CallFunc_GetMinimapLocation_Coords_1 = std::move(Parms.CallFunc_GetMinimapLocation_Coords_1);

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMinimapLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               NoUseScaleMinimap                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector2D                   Coords                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)

double UMinimapWidget_ASA_C::GetMinimapLocation(struct FVector* InputPin, struct FVector2D* Coords, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "GetMinimapLocation");

	Params::UMinimapWidget_ASA_C_GetMinimapLocation_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = std::move(Parms.InputPin);

	if (Coords != nullptr)
		*Coords = std::move(Parms.Coords);

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_MakeVector2D_ReturnValue_1 != nullptr)
		*CallFunc_MakeVector2D_ReturnValue_1 = std::move(Parms.CallFunc_MakeVector2D_ReturnValue_1);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Current MiniMap Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapData                    CurrentMinimapData                                               (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FMapData                    LocalMinimap                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalCharacter*            CallFunc_PawnToPrimalCharacter_ReturnValue                       (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FMapData>            CallFunc_GetMiniMapData_Minimaps                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetPawnLoc_WorldLocation                                (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FMapData                    CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)

int32 UMinimapWidget_ASA_C::Get_Current_MiniMap_Data(const struct FMapData& CurrentMinimapData, struct FMapData* LocalMinimap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalCharacter** CallFunc_PawnToPrimalCharacter_ReturnValue, TArray<struct FMapData>* CallFunc_GetMiniMapData_Minimaps, const struct FVector& CallFunc_GetPawnLoc_WorldLocation, const struct FMapData& CallFunc_Array_Get_Item, int32* CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool* CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "Get Current MiniMap Data");

	Params::UMinimapWidget_ASA_C_Get_Current_MiniMap_Data_Params Parms{};

	Parms.CurrentMinimapData = CurrentMinimapData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPawnLoc_WorldLocation = CallFunc_GetPawnLoc_WorldLocation;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalMinimap != nullptr)
		*LocalMinimap = std::move(Parms.LocalMinimap);

	if (CallFunc_PawnToPrimalCharacter_ReturnValue != nullptr)
		*CallFunc_PawnToPrimalCharacter_ReturnValue = Parms.CallFunc_PawnToPrimalCharacter_ReturnValue;

	if (CallFunc_GetMiniMapData_Minimaps != nullptr)
		*CallFunc_GetMiniMapData_Minimaps = std::move(Parms.CallFunc_GetMiniMapData_Minimaps);

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMiniMapData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMapData>            Minimaps                                                         (ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UMinimapData*                K2Node_DynamicCast_AsMinimap_Data                                (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AWorldSettings*              CallFunc_K2_GetWorldSettings_ReturnValue                         (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UMinimapData*                K2Node_DynamicCast_AsMinimap_Data_1                              (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)

class UMinimapData* UMinimapWidget_ASA_C::GetMiniMapData(TArray<struct FMapData>* Minimaps, bool* K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "GetMiniMapData");

	Params::UMinimapWidget_ASA_C_GetMiniMapData_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;

	UObject::ProcessEvent(Func, &Parms);

	if (Minimaps != nullptr)
		*Minimaps = std::move(Parms.Minimaps);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_K2_GetWorldSettings_ReturnValue != nullptr)
		*CallFunc_K2_GetWorldSettings_ReturnValue = Parms.CallFunc_K2_GetWorldSettings_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetPawnLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Pawn                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
// struct FVector                     WorldLocation                                                    (ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FVector UMinimapWidget_ASA_C::GetPawnLoc(class APrimalCharacter* Pawn, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "GetPawnLoc");

	Params::UMinimapWidget_ASA_C_GetPawnLoc_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapWidget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMinimapWidget_ASA_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "Tick");

	Params::UMinimapWidget_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateZoomMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Zoom                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

double UMinimapWidget_ASA_C::UpdateZoomMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "UpdateZoomMap");

	Params::UMinimapWidget_ASA_C_UpdateZoomMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.AssignOnHandleMark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapMarkWidget_ASA_C*        Ref                                                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

class UMapMarkWidget_ASA_C* UMinimapWidget_ASA_C::AssignOnHandleMark()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "AssignOnHandleMark");

	Params::UMinimapWidget_ASA_C_AssignOnHandleMark_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleTracking_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                Mark                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               IsTracking                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UMinimapWidget_ASA_C::HandleTracking_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "HandleTracking_Event");

	Params::UMinimapWidget_ASA_C_HandleTracking_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UMinimapWidget_ASA_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "PreConstruct");

	Params::UMinimapWidget_ASA_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.HaandleEditMark_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                Mark                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FMinimapMark UMinimapWidget_ASA_C::HaandleEditMark_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "HaandleEditMark_Event");

	Params::UMinimapWidget_ASA_C_HaandleEditMark_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.ExecuteUbergraph_MinimapWidget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             K2Node_CustomEvent_Zoom                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UMapMarkWidget_ASA_C*        K2Node_CustomEvent_Ref                                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FMinimapMark                K2Node_CustomEvent_Mark_1                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_CustomEvent_IsTracking                                    (BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FMinimapMark                K2Node_CustomEvent_Mark                                          (BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class UMapMarkWidget_ASA_C*        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_Get_Render_Scale_for_POI_ReturnValue                    (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)

FDelegateProperty_ UMinimapWidget_ASA_C::ExecuteUbergraph_MinimapWidget_ASA(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double* K2Node_CustomEvent_Zoom, bool CallFunc_IsTimeSince_ReturnValue, class UMapMarkWidget_ASA_C* K2Node_CustomEvent_Ref, struct FMinimapMark* K2Node_CustomEvent_Mark_1, bool K2Node_CustomEvent_IsTracking, struct FMinimapMark* K2Node_CustomEvent_Mark, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UMapMarkWidget_ASA_C* CallFunc_Array_Get_Item, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "ExecuteUbergraph_MinimapWidget_ASA");

	Params::UMinimapWidget_ASA_C_ExecuteUbergraph_MinimapWidget_ASA_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.K2Node_CustomEvent_Ref = K2Node_CustomEvent_Ref;
	Parms.K2Node_CustomEvent_IsTracking = K2Node_CustomEvent_IsTracking;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_Zoom != nullptr)
		*K2Node_CustomEvent_Zoom = Parms.K2Node_CustomEvent_Zoom;

	if (K2Node_CustomEvent_Mark_1 != nullptr)
		*K2Node_CustomEvent_Mark_1 = std::move(Parms.K2Node_CustomEvent_Mark_1);

	if (K2Node_CustomEvent_Mark != nullptr)
		*K2Node_CustomEvent_Mark = std::move(Parms.K2Node_CustomEvent_Mark);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleEditMark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                Mark                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FMinimapMark UMinimapWidget_ASA_C::HandleEditMark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "HandleEditMark__DelegateSignature");

	Params::UMinimapWidget_ASA_C_HandleEditMark__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshCachedData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimapWidget_ASA_C::RefreshCachedData__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "RefreshCachedData__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshTracking__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinimapMark                Mark                                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               IsTracking                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UMinimapWidget_ASA_C::RefreshTracking__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapWidget_ASA_C", "RefreshTracking__DelegateSignature");

	Params::UMinimapWidget_ASA_C_RefreshTracking__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


