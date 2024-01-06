#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x630 - 0x610)
// BlueprintGeneratedClass PreviewScene_Painting.PreviewScene_Painting_C
class APreviewScene_Painting_C : public APreviewScene_Base_C
{
public:
	class USkyLightComponent*                    SkyLight;                                          // 0x610(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst)
	class UDirectionalLightComponent*            DirectionalLight1;                                 // 0x618(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x620(0x8)(ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
	class USceneComponent*                       DirectionalLightsParent;                           // 0x628(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Painting_C* GetDefaultObj();

};

}


