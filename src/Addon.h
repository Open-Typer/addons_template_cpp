#ifndef ADDON_H
#define ADDON_H

#include <QObject>
#include <IAddon.h>
#include <AddonApi.h>

/*
 * All addon classes should be in a namespace to avoid
 * conflicts with other addons and Open-Typer internal classes.
 */
namespace TemplateAddon {
	class Addon;
}

// All addon classes must be declared with Q_DECL_EXPORT!
class Q_DECL_EXPORT TemplateAddon::Addon : public QObject, IAddon
{
		Q_OBJECT
		Q_PLUGIN_METADATA(IID "opentyper.addon" FILE "addon.json")
		Q_INTERFACES(IAddon)
	public:
		Addon(QObject *parent = nullptr);
		~Addon();
		void addonEvent(AddonApi::Event type, QVariantMap args) override;
		QString version() override { return OPENTYPER_VERSION; }
};

#endif // ADDON_H
