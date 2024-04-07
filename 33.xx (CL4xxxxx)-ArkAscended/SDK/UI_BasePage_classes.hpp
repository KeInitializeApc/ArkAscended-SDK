#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x768 - 0x758)
// WidgetBlueprintGeneratedClass UI_BasePage.UI_BasePage_C
class UUI_BasePage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x760(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_BasePage_C* GetDefaultObj();

	void ReloadPage();
	void ConstructPage();
	void ExecuteUbergraph_UI_BasePage(int32* EntryPoint);
};

}


