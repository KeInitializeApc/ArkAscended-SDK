#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// WidgetBlueprintGeneratedClass UI_MyMods.UI_MyMods_C
class UUI_MyMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_MyMods_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, bool* CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, TArray<struct FInstallProgressMod>* CallFunc_ReturnModsOfCurrentPage_TrueModInfo);
	bool UpdatePagination(bool Temp_bool_Variable, int32 CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default);
	void GetMods();
	struct FInstallProgressMod Event_On_Mod_Installed();
	void Destruct();
	void Construct();
	bool ExecuteUbergraph_UI_MyMods(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWidget** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UWidget** CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1);
};

}


