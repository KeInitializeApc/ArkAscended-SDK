#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x388 - 0x330)
// WidgetBlueprintGeneratedClass UI_Sub-Category.UI_Sub-Category_C
class UUI_SubMinusCategory_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_Category;                                   // 0x338(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Fire;                                          // 0x340(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Category;                                     // 0x348(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSubCategoryClicked;                              // 0x350(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_SubOptions                    CategoryInfo;                                      // 0x360(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategory_C* GetDefaultObj();

	class UTexture2DDynamic* OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8();
	class UTexture2DDynamic* OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8();
	void BndEvt__SubMinusCategory1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Set_Button_Style(const struct FButtonStyle& InStyle);
	void Construct();
	struct FButtonStyle ExecuteUbergraph_UI_SubMinusCategory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture);
	void OnSubCategoryClicked__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID);
};

}


