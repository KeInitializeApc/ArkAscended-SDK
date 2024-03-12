#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x618 - 0x600)
// BlueprintGeneratedClass PreviewScene_Explore_Note.PreviewScene_Explore_Note_C
class APreviewScene_Explore_Note_C : public APreviewScene_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x600(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USpotLightComponent*                   SpotLight_FrontLight;                              // 0x608(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USkyLightComponent*                    SkyLight_Custom;                                   // 0x610(0x8)(ConstParm, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Explore_Note_C* GetDefaultObj();

	void ReceiveBeginPlay();
	float NotifyPreviewSceneUpdated();
	bool ExecuteUbergraph_PreviewScene_Explore_Note(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime, class USkeletalMesh** CallFunc_GetSkeletalMeshAsset_ReturnValue);
};

}


