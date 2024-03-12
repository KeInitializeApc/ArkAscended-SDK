#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xB98 - 0xB18)
// WidgetBlueprintGeneratedClass InventoryMenu2.InventoryMenu2_C
class UInventoryMenu2_C : public UUI_Inventory
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB18(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      HideEngrams;                                       // 0xB20(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      OpenEngrams;                                       // 0xB28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetAnimation*                      Close;                                             // 0xB30(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UWidgetAnimation*                      Open;                                              // 0xB38(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UHorizontalBox*                        BG;                                                // 0xB40(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCharacterViewPanel_C*                 CharacterViewPanel;                                // 0xB48(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, DuplicateTransient)
	class UDinoAncestryOverlay_C*                DinoAncestryOverlay;                               // 0xB50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UImage*                                Image;                                             // 0xB58(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0xB60(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_82;                                          // 0xB68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, NoDestructor, AutoWeak)
	class UImage*                                Image_117;                                         // 0xB70(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UInventoryPanel_C*                     PlayerInventoryPanel;                              // 0xB78(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UInventoryPanel_C*                     RemoteInventoryPanel;                              // 0xB80(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatsPanel_C*                         StatsPanel;                                        // 0xB88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference)
	class UWidgetSwitcher*                       WidgetSwitcherRight;                               // 0xB90(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInventoryMenu2_C* GetDefaultObj();

	void Destruct();
	void Construct();
	void ExecuteUbergraph_InventoryMenu2(int32* EntryPoint);
};

}


