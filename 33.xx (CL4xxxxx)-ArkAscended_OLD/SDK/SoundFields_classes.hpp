#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class SoundFields.AmbisonicsEncodingSettings
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{
public:
	int32                                        AmbisonicsOrder;                                   // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F61[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAmbisonicsEncodingSettings* GetDefaultObj();

};

}


