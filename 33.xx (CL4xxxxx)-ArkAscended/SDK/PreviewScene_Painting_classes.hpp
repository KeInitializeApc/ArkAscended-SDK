#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x620 - 0x600)
// BlueprintGeneratedClass PreviewScene_Painting.PreviewScene_Painting_C
class APreviewScene_Painting_C : public APreviewScene_Base_C
{
public:
	class USkyLightComponent*                    SkyLight;                                          // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	class UDirectionalLightComponent*            DirectionalLight1;                                 // 0x608(0x8)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x610(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USceneComponent*                       DirectionalLightsParent;                           // 0x618(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Painting_C* GetDefaultObj();

};

}


