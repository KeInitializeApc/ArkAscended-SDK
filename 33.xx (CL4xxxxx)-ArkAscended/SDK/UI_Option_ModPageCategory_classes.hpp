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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Icon;                                          // 0x338(0x8)(ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Block;                                        // 0x340(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                IconUrl;                                           // 0x348(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu_Ref;                                     // 0x358(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_Option_ModPageCategory_C* GetDefaultObj();

	struct FSlateColor UpdateThemeSettings(bool* CallFunc_IsValid_ReturnValue);
	void OnFail_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic** Texture);
	void OnSuccess_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic** Texture);
	void Construct();
	bool ExecuteUbergraph_UI_Option_ModPageCategory(class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
};

}


