#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x610 - 0x4C8)
// BlueprintGeneratedClass PreviewScene_Base.PreviewScene_Base_C
class APreviewScene_Base_C : public APrimalPreviewSceneSetup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class USpotLightComponent*                   TopLight;                                          // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Config, GlobalConfig, SubobjectReference)
	class UBillboardComponent*                   Billboard;                                         // 0x4D8(0x8)(Net, OutParm, Config, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4E0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UArrowComponent*                       Arrow;                                             // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class USpotLightComponent*                   KeyLight4;                                         // 0x4F0(0x8)(Net, Config, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4F8(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class USpotLightComponent*                   KeyLight2;                                         // 0x500(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Config, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight2_Parent;                                  // 0x508(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class USceneComponent*                       TopLight_Parent;                                   // 0x510(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   BackgroundLight;                                   // 0x518(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class USceneComponent*                       BackgroundLight_Parent;                            // 0x520(0x8)(Edit, ConstParm, ExportObject, OutParm, Config, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   KeyLight3;                                         // 0x528(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x530(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class USpotLightComponent*                   KeyLight1;                                         // 0x538(0x8)(BlueprintVisible, BlueprintReadOnly, Config, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight1_Parent;                                  // 0x540(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight;                                      // 0x548(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight2;                                     // 0x550(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight1;                                     // 0x558(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class USceneComponent*                       LightParent;                                       // 0x560(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x568(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, SubobjectReference)
	class UPostProcessComponent*                 PostProcess;                                       // 0x570(0x8)(ConstParm, BlueprintVisible, Net, Config, GlobalConfig, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x578(0x8)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
	bool                                         bDebugComponents;                                  // 0x580(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2E2B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshComponent*                        For_Mesh_Comp;                                     // 0x588(0x8)(Edit, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	double                                       CameraDistance;                                    // 0x590(0x8)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseSimpleDof;                                      // 0x598(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2E2F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CameraSimpleDofAperature;                          // 0x5A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2E32[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CameraSimpleDofTarget;                             // 0x5B0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Base_C* GetDefaultObj();

	void SetDebugLightIntensity(double NewIntensity);
	struct FRotator SetDebugLightRotation();
	void DebugLights();
	void UpdateFloorLocation(bool IsFemale);
	class AShooterPlayerController* NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, const TArray<class USceneComponent*>& ForChildComps);
	float NotifyPreviewSceneUpdated();
	struct FVector ExecuteUbergraph_PreviewScene_Base(const struct FVector& CallFunc_BreakTransform_Location, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent** K2Node_Event_ForMeshComp, TArray<class USceneComponent*>* K2Node_Event_ForChildComps, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, struct FTransform* CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, double* CallFunc_Vector_Distance_ReturnValue, float* K2Node_Event_DeltaTime, float* K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float* K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast);
};

}


