#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x7D0 - 0x7C0)
// WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C
class UMapSpawnPoint_C : public UUI_SpawnPoint
{
public:
	class UImage*                                DefaultDestinationImage;                           // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                SpawnPointImage;                                   // 0x7C8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMapSpawnPoint_C* GetDefaultObj();

	enum class ESlateVisibility Get_Default__MapSpawnPoint_C_Visiblity_0();
};

}


