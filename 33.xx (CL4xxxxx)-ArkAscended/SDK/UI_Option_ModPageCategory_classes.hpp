#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass UI_Option_ModPageCategory.UI_Option_ModPageCategory_C
class UUI_Option_ModPageCategory_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UImage*                                IMG_Icon;                                          // 0x338(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Block;                                        // 0x340(0x8)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                IconUrl;                                           // 0x348(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu_Ref;                                     // 0x358(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Option_ModPageCategory_C* GetDefaultObj();

	struct FSlateColor UpdateThemeSettings();
	class UTexture2DDynamic* OnFail_20B338B847EF646EF76186BFC4DF1AD5();
	class UTexture2DDynamic* OnSuccess_20B338B847EF646EF76186BFC4DF1AD5();
	void Construct();
	bool ExecuteUbergraph_UI_Option_ModPageCategory(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsEmpty_ReturnValue);
};

}


