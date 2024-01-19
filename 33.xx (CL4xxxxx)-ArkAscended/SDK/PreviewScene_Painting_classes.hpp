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
	class UDirectionalLightComponent*            DirectionalLight1;                                 // 0x618(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0x620(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	class USceneComponent*                       DirectionalLightsParent;                           // 0x628(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class APreviewScene_Painting_C* GetDefaultObj();

};

}


