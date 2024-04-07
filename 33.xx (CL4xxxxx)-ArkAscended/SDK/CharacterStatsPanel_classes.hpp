#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x1098 - 0xF70)
// WidgetBlueprintGeneratedClass CharacterStatsPanel.CharacterStatsPanel_C
class UCharacterStatsPanel_C : public UStatsPanelWidget_Character
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF70(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UStatWidget_C*                         CraftingSpeedStat;                                 // 0xF78(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_0;    // 0xF80(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, RepNotify)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_1;    // 0xF88(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, Interp)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_2;    // 0xF90(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, RepNotify, Interp)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_3;    // 0xF98(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, NonTransactional)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_4;    // 0xFA0(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, RepNotify, NonTransactional)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_5;    // 0xFA8(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, Interp, NonTransactional)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_6;    // 0xFB0(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, RepNotify, Interp, NonTransactional)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_7;    // 0xFB8(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, EditorOnly)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_8;    // 0xFC0(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, RepNotify, EditorOnly)
	class UDataListEntryWidgetPrimalItem_StatEquipped_C* DataListEntryWidgetPrimalItem_StatEquipped_C_9;    // 0xFC8(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, Interp, EditorOnly)
	class UProgressBar*                          ExperienceBar;                                     // 0xFD0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Female;                                            // 0xFD8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         FoodStat;                                          // 0xFE0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         FortitudeStat;                                     // 0xFE8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       GenderSwitcher;                                    // 0xFF0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UStatWidget_C*                         HealthStat;                                        // 0xFF8(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image_7;                                           // 0x1000(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly)
	class UImage*                                Image_111;                                         // 0x1008(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NoDestructor, AutoWeak)
	class UStructureStatWidget_C*                ImprintingStat;                                    // 0x1010(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Male;                                              // 0x1018(0x8)(Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         MeleeDamageStat;                                   // 0x1020(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         MovementSpeedStat;                                 // 0x1028(0x8)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   MultiUseButton1;                                   // 0x1030(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   MultiUseButton2;                                   // 0x1038(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   MultiUseButton3;                                   // 0x1040(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                MutagenIcon;                                       // 0x1048(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         OxygenStat;                                        // 0x1050(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ShowAncestorsButton;                               // 0x1058(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ShowBuffs;                                         // 0x1060(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ShowStats;                                         // 0x1068(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         StaminaStat;                                       // 0x1070(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         TorpidityStat;                                     // 0x1078(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         WaterStat;                                         // 0x1080(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStatWidget_C*                         WeightStat;                                        // 0x1088(0x8)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       WidgetStatsBuff;                                   // 0x1090(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCharacterStatsPanel_C* GetDefaultObj();

	void BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CharacterStatsPanel(int32* EntryPoint);
};

}


