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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   TopLight;                                          // 0x4D0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBillboardComponent*                   Billboard;                                         // 0x4D8(0x8)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4E0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UArrowComponent*                       Arrow;                                             // 0x4E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	class USpotLightComponent*                   KeyLight4;                                         // 0x4F0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   KeyLight2;                                         // 0x500(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight2_Parent;                                  // 0x508(0x8)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       TopLight_Parent;                                   // 0x510(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   BackgroundLight;                                   // 0x518(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       BackgroundLight_Parent;                            // 0x520(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   KeyLight3;                                         // 0x528(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x530(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   KeyLight1;                                         // 0x538(0x8)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight1_Parent;                                  // 0x540(0x8)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight;                                      // 0x548(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight2;                                     // 0x550(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight1;                                     // 0x558(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       LightParent;                                       // 0x560(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x568(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class UPostProcessComponent*                 PostProcess;                                       // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x578(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst)
	bool                                         bDebugComponents;                                  // 0x580(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F8D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshComponent*                        For_Mesh_Comp;                                     // 0x588(0x8)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CameraDistance;                                    // 0x590(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         UseSimpleDof;                                      // 0x598(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F8E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CameraSimpleDofAperature;                          // 0x5A0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F8F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CameraSimpleDofTarget;                             // 0x5B0(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Base_C* GetDefaultObj();

	void SetDebugLightIntensity(double NewIntensity);
	struct FRotator SetDebugLightRotation();
	void DebugLights();
	bool UpdateFloorLocation();
	TArray<class USceneComponent*> NotifySetupPreviewScene(class AShooterPlayerController* ForPC);
	float NotifyPreviewSceneUpdated();
	float ExecuteUbergraph_PreviewScene_Base(int32 EntryPoint, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, int32* CallFunc_Subtract_IntInt_ReturnValue_1, struct FTransform* CallFunc_GetRelativeTransform_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation_1, struct FVector* CallFunc_BreakTransform_Scale_1, double* CallFunc_Vector_Distance_ReturnValue, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast);
};

}


