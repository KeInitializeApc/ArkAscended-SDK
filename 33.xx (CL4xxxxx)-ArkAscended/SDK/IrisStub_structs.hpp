#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// ScriptStruct IrisStub.NetSerializerConfig
struct FNetSerializerConfig
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IrisStub.PolymorphicStructNetSerializerConfig
struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_2441[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct IrisStub.PolymorphicArrayStructNetSerializerConfig
struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_2442[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


