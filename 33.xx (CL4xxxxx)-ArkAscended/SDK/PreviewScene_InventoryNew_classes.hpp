#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x690 - 0x600)
// BlueprintGeneratedClass PreviewScene_InventoryNew.PreviewScene_InventoryNew_C
class APreviewScene_InventoryNew_C : public APreviewScene_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x600(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USceneComponent*                       NewLightRig;                                       // 0x608(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x610(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USpotLightComponent*                   SpotLight1;                                        // 0x618(0x8)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USpotLightComponent*                   SpotLight3;                                        // 0x620(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USpotLightComponent*                   SpotLight2;                                        // 0x628(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USpotLightComponent*                   SpotLight;                                         // 0x630(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USkyLightComponent*                    SkyLight;                                          // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class USpotLightComponent*                   SpotLight_FrontLight;                              // 0x640(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  SM_DomeInverted;                                   // 0x648(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  Floor;                                             // 0x650(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       SpotlightRoot;                                     // 0x658(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       LightingGeo;                                       // 0x660(0x8)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       INVENTORY_LIGHTS;                                  // 0x668(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  Sphere;                                            // 0x670(0x8)(Edit, ConstParm, BlueprintVisible, OutParm)
	class UCurveFloat*                           Floor_Blend_Curve;                                 // 0x678(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UCurveFloat*                           Front_Light_Blend_Curve;                           // 0x680(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInstanceDynamic*              Dynamic_Material_Instance_ENV;                     // 0x688(0x8)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_InventoryNew_C* GetDefaultObj();

	double UpdateFloorLocation(bool IsFemale, const struct FVector& CallFunc_MakeVector_ReturnValue, struct FHitResult* CallFunc_K2_SetRelativeLocation_SweepHitResult);
	float FrontLightChangeWhenBelowFloor(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw);
	double RotateLightsInZWithCamera(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FHitResult* CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetSourceCubemapAngle_NewValue_ImplicitCast);
	float NotifyPreviewSceneUpdated();
	TArray<class USceneComponent*> NotifySetupPreviewScene(class AShooterPlayerController** ForPC);
	class AShooterPlayerController* ExecuteUbergraph_PreviewScene_InventoryNew(int32* EntryPoint, float K2Node_Event_DeltaTime, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, int32* CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


