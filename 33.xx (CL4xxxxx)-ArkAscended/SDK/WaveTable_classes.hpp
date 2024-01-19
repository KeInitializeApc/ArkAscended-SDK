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
	uint8                                        Pad_262F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EWaveTableResolution              Resolution;                                        // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBipolar;                                          // 0x31(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2630[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FWaveTableBankEntry>           Entries;                                           // 0x38(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UWaveTableBank* GetDefaultObj();

};

}


