#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class WaveTable.WaveTableBank
class UWaveTableBank : public UObject
{
public:
	uint8                                        Pad_26ED[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EWaveTableResolution              Resolution;                                        // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBipolar;                                          // 0x31(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26EE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FWaveTableBankEntry>           Entries;                                           // 0x38(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UWaveTableBank* GetDefaultObj();

};

}


