#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass UI_Downloads.UI_Downloads_C
class UUI_Downloads_C : public UPrimalUserWidget
{
public:
	class UImage*                                IMG_Overlay;                                       // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_NumOfDownloads;                               // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Downloads_C* GetDefaultObj();

	class FText SetNumberOfDownloadsText();
};

}


