#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass UI_DownloadSize.UI_DownloadSize_C
class UUI_DownloadSize_C : public UPrimalUserWidget
{
public:
	class UImage*                                IMG_Overlay;                                       // 0x330(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_DownloadSize;                                 // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_DownloadSize_C* GetDefaultObj();

	void SetSizeText(class FText* InText);
};

}


