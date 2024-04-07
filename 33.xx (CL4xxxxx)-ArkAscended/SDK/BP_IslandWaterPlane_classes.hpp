#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x580 - 0x4C0)
// BlueprintGeneratedClass BP_IslandWaterPlane.BP_IslandWaterPlane_C
class ABP_IslandWaterPlane_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UStaticMeshComponent*                  SM_OceanPlanet;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, GlobalConfig, InstancedReference)
	class UInstancedStaticMeshComponent*         InstancedStaticMesh;                               // 0x4D0(0x8)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  RenderMeshUnderside;                               // 0x4D8(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  RenderMeshSurface;                                 // 0x4E0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class ADirectionalLight*                     Sunlight;                                          // 0x4E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class ADayCycleManager*                      DayCycleManager;                                   // 0x4F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig)
	double                                       Size;                                              // 0x4F8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	double                                       UndersideZOffset;                                  // 0x500(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         Master;                                            // 0x508(0x1)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	uint8                                        Pad_5C14[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           WaterPlane;                                        // 0x510(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    TopMaterial;                                       // 0x518(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    UndersideMaterial;                                 // 0x520(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       PrevFoamIntensity;                                 // 0x528(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         NoWaterPlane;                                      // 0x530(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoUpdateDayCycleValues;                         // 0x531(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C18[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        WaterPresetIndex;                                  // 0x534(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FWaterMaterialSet_Struct>      WaterPresets;                                      // 0x538(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       WorldSizeKm;                                       // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       LumenFillPlaneSize;                                // 0x550(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       NumberOfPlanes;                                    // 0x558(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    LumenPlaneInstances;                               // 0x560(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowLumenPlanes;                                  // 0x570(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C1A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LumenFillPlaneZOffset;                             // 0x578(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABP_IslandWaterPlane_C* GetDefaultObj();

	bool SetMaterials();
	float SetFoamIntensity(bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess);
	float UpdateSun(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_MapRangeUnclamped_ReturnValue, struct FLinearColor* K2Node_MakeStruct_LinearColor, struct FLinearColor* K2Node_MakeStruct_LinearColor_1, double CallFunc_Abs_A_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1);
	float UserConstructionScript(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FHitResult* CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature();
	void ReceiveBeginPlay();
	void AutoUpdateValues();
	float ExecuteUbergraph_BP_IslandWaterPlane(int32* EntryPoint, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


