#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x368 - 0x330)
// WidgetBlueprintGeneratedClass UI_WhiteCategoryPreview.UI_WhiteCategoryPreview_C
class UUI_WhiteCategoryPreview_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                IMG_BackOutlineforBackground;                      // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UImage*                                IMG_FrontBackground;                               // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class UTextBlock*                            TEXT_InsideText;                                   // 0x348(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)
	class FText                                  Text_To_Display;                                   // 0x350(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_WhiteCategoryPreview_C* GetDefaultObj();

	class FText UpdateText(bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_UI_WhiteCategoryPreview(int32* EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


