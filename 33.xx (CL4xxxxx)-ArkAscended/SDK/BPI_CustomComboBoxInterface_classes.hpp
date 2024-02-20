#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CustomComboBoxInterface.BPI_CustomComboBoxInterface_C
class IBPI_CustomComboBoxInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CustomComboBoxInterface_C* GetDefaultObj();

	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(class FString* Option, int64* ID);
};

}


