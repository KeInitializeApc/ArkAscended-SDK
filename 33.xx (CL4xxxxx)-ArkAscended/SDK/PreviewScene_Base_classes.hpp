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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USpotLightComponent*                   TopLight;                                          // 0x4D0(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UBillboardComponent*                   Billboard;                                         // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow3;                                            // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class UArrowComponent*                       Arrow;                                             // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class USpotLightComponent*                   KeyLight4;                                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow2;                                            // 0x4F8(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class USpotLightComponent*                   KeyLight2;                                         // 0x500(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight2_Parent;                                  // 0x508(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       TopLight_Parent;                                   // 0x510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   BackgroundLight;                                   // 0x518(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       BackgroundLight_Parent;                            // 0x520(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USpotLightComponent*                   KeyLight3;                                         // 0x528(0x8)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UArrowComponent*                       Arrow1;                                            // 0x530(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	class USpotLightComponent*                   KeyLight1;                                         // 0x538(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       KeyLight1_Parent;                                  // 0x540(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight;                                      // 0x548(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight2;                                     // 0x550(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UPointLightComponent*                  AmbientLight1;                                     // 0x558(0x8)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       LightParent;                                       // 0x560(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UPostProcessComponent*                 PostProcess;                                       // 0x570(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x578(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst)
	bool                                         bDebugComponents;                                  // 0x580(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_121B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMeshComponent*                        For_Mesh_Comp;                                     // 0x588(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	double                                       CameraDistance;                                    // 0x590(0x8)(ExportObject, Net, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         UseSimpleDof;                                      // 0x598(0x1)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_121C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CameraSimpleDofAperature;                          // 0x5A0(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_121E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CameraSimpleDofTarget;                             // 0x5B0(0x60)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Base_C* GetDefaultObj();

	double SetDebugLightIntensity();
	struct FRotator SetDebugLightRotation();
	void DebugLights();
	void UpdateFloorLocation(bool IsFemale);
	TArray<class USceneComponent*> NotifySetupPreviewScene(class AShooterPlayerController** ForPC);
	float NotifyPreviewSceneUpdated();
	struct FRotator ExecuteUbergraph_PreviewScene_Base(int32 EntryPoint, struct FVector* CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, class AShooterPlayerController* K2Node_Event_ForPC, class USceneComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Scale_1, double CallFunc_Vector_Distance_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast);
};

}


