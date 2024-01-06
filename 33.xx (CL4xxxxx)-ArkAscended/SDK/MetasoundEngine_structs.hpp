#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMetaSoundMessageLevel : uint8
{
	Error                          = 0,
	Warning                        = 1,
	Info                           = 2,
	EMetaSoundMessageLevel_MAX     = 3,
};

enum class EMetasoundSourceAudioFormat : uint8
{
	Mono                           = 0,
	Stereo                         = 1,
	Quad                           = 2,
	FiveDotOne                     = 3,
	SevenDotOne                    = 4,
	COUNT                          = 5,
	EMetasoundSourceAudioFormat_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
struct FDefaultMetaSoundAssetAutoUpdateSettings
{
public:
	struct FSoftObjectPath                       Metasound;                                         // 0x0(0x20)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
struct FMetaSoundAssetDirectory
{
public:
	struct FDirectoryPath                        Directory;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
struct FMetaSoundAsyncAssetDependencies
{
public:
	uint8                                        Pad_1F77[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               Metasound;                                         // 0x8(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F78[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

}

