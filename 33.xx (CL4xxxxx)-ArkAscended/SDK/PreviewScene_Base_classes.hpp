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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   TopLight;                                          // 0x4D0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UBillboardComponent*                   Billboard;                                         // 0x4D8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4E0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow;                                             // 0x4E8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	class USpotLightComponent*                   KeyLight4;                                         // 0x4F0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4F8(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   KeyLight2;                                         // 0x500(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight2_Parent;                                  // 0x508(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       TopLight_Parent;                                   // 0x510(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   BackgroundLight;                                   // 0x518(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       BackgroundLight_Parent;                            // 0x520(0x8)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   KeyLight3;                                         // 0x528(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x530(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   KeyLight1;                                         // 0x538(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight1_Parent;                                  // 0x540(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight;                                      // 0x548(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight2;                                     // 0x550(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight1;                                     // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       LightParent;                                       // 0x560(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x568(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UPostProcessComponent*                 PostProcess;                                       // 0x570(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x578(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst)
	bool                                         bDebugComponents;                                  // 0x580(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_386D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshComponent*                        For_Mesh_Comp;                                     // 0x588(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CameraDistance;                                    // 0x590(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         UseSimpleDof;                                      // 0x598(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_386E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CameraSimpleDofAperature;                          // 0x5A0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_386F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CameraSimpleDofTarget;                             // 0x5B0(0x60)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Base_C* GetDefaultObj();

	double SetDebugLightIntensity();
	void SetDebugLightRotation(const struct FRotator& NewRotation);
	void DebugLights();
	void UpdateFloorLocation(bool IsFemale);
	class AShooterPlayerController* NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, const TArray<class USceneComponent*>& ForChildComps);
	void NotifyPreviewSceneUpdated(float* DeltaTime);
	float ExecuteUbergraph_PreviewScene_Base(struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, class UMeshComponent** K2Node_Event_ForMeshComp, TArray<class USceneComponent*>* K2Node_Event_ForChildComps, class USceneComponent** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, double CallFunc_Vector_Distance_ReturnValue, float* K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float* K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast);
};

}


