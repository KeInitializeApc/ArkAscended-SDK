#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x7A9 - 0x788)
// WidgetBlueprintGeneratedClass TutorialUI.TutorialUI_C
class UTutorialUI_C : public UUI_Tutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0x790(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0x798(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UImage*                                TutorialImage;                                     // 0x7A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRemoving;                                         // 0x7A8(0x1)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTutorialUI_C* GetDefaultObj();

	void RemovedFromViewport();
	void AddedToViewport();
	bool ExecuteUbergraph_TutorialUI(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UHUDNotificationPanel_C* CallFunc_Array_Get_Item, class UHUDNotificationPanel_C* CallFunc_Array_Get_Item_1);
};

}


